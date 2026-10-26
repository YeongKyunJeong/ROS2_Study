import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.bridge = CvBridge()
        self.pub = self.create_publisher(Image, 'camera/image_raw', 10)

        # 이미지를 읽어오는 부분
        self.cap = cv2.VideoCapture(0)  # 카메라 장치 번호
        
        self.create_timer(0.1, self.publish_image)  # 10Hz로 이미지 발행
    def publish_image(self):
        ret, self.frame = self.cap.read()
        if ret:
            ros_image = self.bridge.cv2_to_imgmsg(self.frame, encoding='bgr8')
            self.pub.publish(ros_image)
            self.get_logger().info('Published image')

def main():
    rclpy.init()
    camera_publisher = CameraPublisher()
    try:
        rclpy.spin(camera_publisher)
    except KeyboardInterrupt:
        pass
    finally:    
        camera_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()