# day1_practice/day1_practice/2_0_a_image_publisher.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class ImagePublisher(Node):
    def __init__(self):
        super().__init__('image_publisher')
        self.pub = self.create_publisher(Image, 'image', 10)
        self.brg = CvBridge()
        self.declare_parameter('image_path', '')
        image_path = self.get_parameter('image_path').value
        self.cv_image = None
        if image_path:
            self.cv_image = cv2.imread(image_path, cv2.IMREAD_COLOR)

        if self.cv_image is None:
            self.get_logger().warning('이미지를 읽어오지 못했습니다. 임시 이미지를 사용합니다.')
            self.cv_image = np.zeros((480, 640, 3), dtype = np.uint8)
        self.timer = self.create_timer(0.1, self.publish_image)

    def publish_image(self):
        msg = self.brg.cv2_to_imgmsg(self.cv_image, encoding = 'bgr8')
        msg.header.stamp = self.get_clock().now().to_msg()
        self.pub.publish(msg)

    # def cv2_to_imgmsg(cv_image: np.ndarray, encoding = 'bgr8') -> Image:
    #     msg = Image()
    #     msg.height, msg.width = cv_image.shape[:2]
    #     msg.encoding = encoding
    #     msg.is_bigendian = 0

    #     channels = cv_image.shape[2] if len(cv_image.shape) > 2 else 1
    #     msg.step = cv_image.shape[1]*channels
    #     msg.data = cv_image.tobytes()
    #     return msg

def main():
    rclpy.init()
    #
    node = ImagePublisher()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()

