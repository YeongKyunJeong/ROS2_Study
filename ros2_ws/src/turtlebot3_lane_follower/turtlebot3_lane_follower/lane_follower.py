#!/usr/bin/env python3
"""
TurtleBot3 Autonomous Driving Lane Follower using Traditional OpenCV
Features:
- Dual Lane Detection: Yellow Center Line + White Boundary Line
- Dynamic Centroid Fusion for lane centering
- Smooth PD Steering Controller with Adaptive Speed Curve
- Odometry-based Track Lap Completion Monitoring
- Real-time Debug Image Streaming (/lane_debug/image_raw)
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist, TwistStamped
from nav_msgs.msg import Odometry
import cv2
import numpy as np
import time

def imgmsg_to_cv2(msg: Image) -> np.ndarray:
    """cv_bridge 의존성 없는 안전한 Image -> OpenCV ndarray 변환"""
    channels = 3 if ('rgb' in msg.encoding or 'bgr' in msg.encoding) else 1
    im = np.frombuffer(msg.data, dtype=np.uint8).reshape((msg.height, msg.width, channels))
    if msg.encoding == 'rgb8':
        return cv2.cvtColor(im, cv2.COLOR_RGB2BGR)
    return im

def cv2_to_imgmsg(cv_image: np.ndarray, encoding: str = 'bgr8') -> Image:
    """cv_bridge 의존성 없는 안전한 OpenCV ndarray -> Image 변환"""
    msg = Image()
    msg.height, msg.width = cv_image.shape[:2]
    msg.encoding = encoding
    msg.is_bigendian = 0
    channels = cv_image.shape[2] if len(cv_image.shape) > 2 else 1
    msg.step = cv_image.shape[1] * channels
    msg.data = cv_image.tobytes()
    return msg

class LaneFollower(Node):
    def __init__(self):
        super().__init__('lane_follower')
        self.get_logger().info('====================================================')
        self.get_logger().info('🏁 Starting TurtleBot3 OpenCV Lane Follower Node 🏁')
        self.get_logger().info('====================================================')

        # self.bridge = CvBridge()
        # ROS 2 Jazzy & Gazebo Sim DiffDrive bridge uses TwistStamped
        self.cmd_pub = self.create_publisher(TwistStamped, '/cmd_vel', 10)
        self.debug_pub = self.create_publisher(Image, '/lane_debug/image_raw', 10)

        self.image_sub = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.image_callback,
            10
        )

        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        # Control Gains
        self.kp = 0.0042
        self.kd = 0.0018
        self.prev_error = 0.0
        self.max_linear_speed = 0.20
        self.min_linear_speed = 0.08
        self.max_angular_speed = 1.3

        # HSV Thresholds (Tuned for Track 1 in Gazebo Sim)
        self.yellow_lower = np.array([15, 60, 60])
        self.yellow_upper = np.array([45, 255, 255])

        self.white_lower = np.array([0, 0, 160])
        self.white_upper = np.array([180, 50, 255])

        self.lane_half_width = 230  # pixels

        # Lap Tracking State
        self.start_time = None
        self.total_distance = 0.0
        self.prev_x = None
        self.prev_y = None
        self.start_x = None
        self.start_y = None
        self.lap_completed = False
        self.frames_processed = 0

        self.get_logger().info('Node Ready: Waiting for camera frames...')

    def odom_callback(self, msg: Odometry):
        curr_x = msg.pose.pose.position.x
        curr_y = msg.pose.pose.position.y

        if self.prev_x is None:
            self.prev_x = curr_x
            self.prev_y = curr_y
            self.start_x = curr_x
            self.start_y = curr_y
            self.start_time = time.time()
            return

        # 누적 주행 거리 계산
        d = np.hypot(curr_x - self.prev_x, curr_y - self.prev_y)
        self.total_distance += d
        self.prev_x = curr_x
        self.prev_y = curr_y

        # 트랙 완주 판정 (약 20m 이상 주행 후 출발점 1.5m 이내 복귀)
        dist_to_start = np.hypot(curr_x - self.start_x, curr_y - self.start_y)
        if self.total_distance > 18.0 and dist_to_start < 1.4 and not self.lap_completed:
            self.lap_completed = True
            elapsed = time.time() - self.start_time
            self.get_logger().info('*****************************************************')
            self.get_logger().info(f'🎉 [TRACK FINISHED] 1 LAP COMPLETED SUCCESSFULLY! 🎉')
            self.get_logger().info(f'⏱️ Total Time: {elapsed:.2f} seconds')
            self.get_logger().info(f'📏 Total Distance Traveled: {self.total_distance:.2f} m')
            self.get_logger().info('*****************************************************')

    def image_callback(self, msg):
        self.frames_processed += 1
        try:
            cv_image = imgmsg_to_cv2(msg)
        except Exception as e:
            self.get_logger().error(f'Image decode error: {e}')
            return

        h, w, _ = cv_image.shape

        # 1. 관심 영역 (ROI) 설정: 화면 하단 40%
        roi_start_row = int(h * 0.60)
        roi = cv_image[roi_start_row:h, 0:w]
        roi_h, roi_w, _ = roi.shape

        # 2. HSV 변환 및 블러링
        blurred = cv2.GaussianBlur(roi, (5, 5), 0)
        hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)

        # 3. 색상 마스크 추출
        mask_yellow = cv2.inRange(hsv, self.yellow_lower, self.yellow_upper)
        mask_white = cv2.inRange(hsv, self.white_lower, self.white_upper)

        # 모폴로지 연산으로 노이즈 정제
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
        mask_yellow = cv2.morphologyEx(mask_yellow, cv2.MORPH_OPEN, kernel)
        mask_white = cv2.morphologyEx(mask_white, cv2.MORPH_OPEN, kernel)

        # 4. 무게중심(Moments) 계산
        my = cv2.moments(mask_yellow)
        mw = cv2.moments(mask_white)

        has_yellow = my['m00'] > 300
        has_white = mw['m00'] > 300

        target_x = w // 2

        # 디버그 뷰 드로잉 준비
        debug_img = cv_image.copy()
        cv2.rectangle(debug_img, (0, roi_start_row), (w, h), (0, 255, 0), 2)

        cx_y, cx_w = None, None

        if has_yellow:
            cx_y = int(my['m10'] / my['m00'])
            cy_y = int(my['m01'] / my['m00']) + roi_start_row
            cv2.circle(debug_img, (cx_y, cy_y), 7, (0, 230, 255), -1)
            cv2.putText(debug_img, "Yellow", (cx_y - 20, cy_y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.45, (0, 230, 255), 1)

        if has_white:
            cx_w = int(mw['m10'] / mw['m00'])
            cy_w = int(mw['m01'] / mw['m00']) + roi_start_row
            cv2.circle(debug_img, (cx_w, cy_w), 7, (255, 255, 255), -1)
            cv2.putText(debug_img, "White", (cx_w - 18, cy_w - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.45, (255, 255, 255), 1)

        # 목표 주행 중심점(Target X) 융합 결정
        if has_yellow and has_white:
            # 양쪽 차선이 모두 보일 때: 두 차선 사이의 정확한 정중앙
            target_x = int((cx_y + cx_w) / 2)
            cv2.line(debug_img, (cx_y, roi_start_row + int(roi_h * 0.5)),
                               (cx_w, roi_start_row + int(roi_h * 0.5)), (255, 120, 0), 2)
        elif has_yellow:
            # 노란선만 보일 때: 우측 통행이므로 노란선 오른쪽 lane_half_width 위치
            target_x = cx_y + self.lane_half_width
        elif has_white:
            # 흰색선만 보일 때: 흰색선 왼쪽 lane_half_width 위치
            target_x = cx_w - self.lane_half_width
        else:
            # 점선 틈새 등 일시 미검출 시 직전 에러 유지
            target_x = int(w // 2 + self.prev_error)

        # 5. 오차 계산 및 PD 제어
        screen_center_x = w // 2
        error = target_x - screen_center_x

        d_error = error - self.prev_error
        self.prev_error = error

        angular_z = -float(self.kp * error + self.kd * d_error)
        angular_z = float(np.clip(angular_z, -self.max_angular_speed, self.max_angular_speed))

        # 적응형 선속도 (직선 0.20 m/s, 급코너 시 0.08 m/s로 안전 감속)
        turn_severity = min(1.0, abs(error) / (w * 0.35))
        linear_x = self.max_linear_speed * (1.0 - 0.60 * turn_severity)
        linear_x = float(np.clip(linear_x, self.min_linear_speed, self.max_linear_speed))

        # 6. 모터 명령(Twist / TwistStamped) 발행
        self.publish_cmd(linear_x, angular_z)

        # 7. 디버그 오버레이 표시
        # 로봇 중심선 (Cyan)
        cv2.line(debug_img, (screen_center_x, roi_start_row), (screen_center_x, h), (255, 255, 0), 2)
        # 타깃 중심점 (Red)
        cv2.circle(debug_img, (target_x, roi_start_row + int(roi_h * 0.5)), 8, (0, 0, 255), -1)

        # HUD 텍스트
        status_line1 = f"Speed: {linear_x:.2f} m/s | Turn: {angular_z:+.2f} rad/s | Err: {error:+d}"
        status_line2 = f"Distance: {self.total_distance:.1f}m | Status: {'LAP DONE!' if self.lap_completed else 'DRIVING'}"
        cv2.putText(debug_img, status_line1, (16, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.60, (0, 255, 0), 2)
        cv2.putText(debug_img, status_line2, (16, 58), cv2.FONT_HERSHEY_SIMPLEX, 0.60, (0, 255, 255), 2)

        if self.frames_processed % 30 == 0:
            self.get_logger().info(f"[CV Telemetry] {status_line1} | Dist: {self.total_distance:.1f}m")

        try:
            debug_msg = cv2_to_imgmsg(debug_img, encoding='bgr8')
            self.debug_pub.publish(debug_msg)
        except Exception:
            pass

    def publish_cmd(self, linear_x, angular_z):
        stamped = TwistStamped()
        stamped.header.stamp = self.get_clock().now().to_msg()
        stamped.header.frame_id = 'base_link'
        stamped.twist.linear.x = float(linear_x)
        stamped.twist.angular.z = float(angular_z)
        self.cmd_pub.publish(stamped)

    def stop_robot(self):
        self.publish_cmd(0.0, 0.0)
        self.get_logger().info('Robot stopped.')

def main(args=None):
    rclpy.init(args=args)
    node = LaneFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Stopping by user request...')
    finally:
        node.stop_robot()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
