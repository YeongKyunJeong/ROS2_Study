# day1_practice/day1_practice/2_0_b_image_subscriber.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import numpy as np

class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')
        self.brg = CvBridge()
        self.sub = self.create_subscription(Image, 'image', self.image_sub_callback, 10)

    def image_sub_callback(self, imgmsg:Image):
        cv_image = self.brg.imgmsg_to_cv2(imgmsg,
                                          desired_encoding = 'passthrough')

        self.get_logger().info(f"이미지 수신 : shape = {cv_image.shape}, dtype = {cv_image.dtype}")
        

def main():
    rclpy.init()
    #
    node = ImageSubscriber()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()

