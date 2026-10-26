import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class LaneDetector(Node):
    def __init__(self):
        super().__init__('lane_detector')
        self.bridge = CvBridge()
        self.sub = self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)
        # 원본 이미지에 차선이 결합되어 표시되는 topic
        self.pub_original = self.create_publisher(Image, 'lane_detected/original', 10)
        # masked 이미지를 표시하는 topic
        self.pub_masked = self.create_publisher(Image, 'lane_detected/masked', 10)

    def image_callback(self, msg):
        # ROS 이미지 메시지를 OpenCV 이미지로 변환
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        # 흑백 변환
        gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        edges = cv2.Canny(gray_image, 50, 150)  # Canny edge detection
        h, w =edges.shape       
        # 이미지 크기 조정        
        mask = np.zeros_like(edges)
        roi = np.array([[(0, h), (w // 4, h // 2),(w*3 // 4, h // 2), (w, h)]], dtype=np.int32)
        cv2.fillPoly(mask, roi, 255)
        masked_edges = cv2.bitwise_and(edges, mask)
        lines = cv2.HoughLinesP(masked_edges, 1, np.pi / 180, threshold=50, minLineLength=40, maxLineGap=10)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                cv2.line(cv_image, (x1, y1), (x2, y2), (0, 255, 0), 5)
        gray_image = cv2.resize(gray_image, (640, 480), interpolation=cv2.INTER_AREA)
        cv_image = cv2.resize(cv_image, (640, 480), interpolation=cv2.INTER_AREA)  # 이미지 크기 조정
        edges = cv2.resize(edges, (640, 480), interpolation=cv2.INTER_AREA)  # 이미지 크기 조정
        masked_edges = cv2.resize(masked_edges, (640, 480), interpolation=cv2.INTER_AREA)  # 이미지 크기 조정
        # OpenCV를 사용하여 이미지 처리 (예: 화면에 표시)
        # cv2.imshow("Received Image", cv_image)
        # cv2.imshow("Gray Image", gray_image)
        # cv2.imshow("Edges", edges)
        # cv2.imshow("Masked Edges", masked_edges)
        # cv2.waitKey(1)  # 1ms 대기

        # Publish the processed images
        self.pub_original.publish(self.bridge.cv2_to_imgmsg(cv_image, encoding='bgr8'))
        self.pub_masked.publish(self.bridge.cv2_to_imgmsg(masked_edges, encoding='mono8'))

def main():
    rclpy.init()
    lane_detector = LaneDetector()
    try:
        rclpy.spin(lane_detector)
    except KeyboardInterrupt:
        pass
    finally:
        lane_detector.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()
if __name__ == '__main__':
    main()