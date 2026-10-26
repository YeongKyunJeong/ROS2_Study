import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')
        self.bridge = CvBridge()
        self.sub = self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)

    def image_callback(self, msg):
        # ROS 이미지 메시지를 OpenCV 이미지로 변환
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        cv_image = cv2.resize(cv_image, (320, 240), interpolation=cv2.INTER_AREA)  # 이미지 크기 조정
        # OpenCV를 사용하여 이미지 처리 (예: 화면에 표시)
        cv2.imshow("Received Image", cv_image)
        cv2.waitKey(1)  # 1ms 대기

def main():
    rclpy.init()
    image_subscriber = ImageSubscriber()
    try:
        rclpy.spin(image_subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        image_subscriber.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()
if __name__ == '__main__':
    main()