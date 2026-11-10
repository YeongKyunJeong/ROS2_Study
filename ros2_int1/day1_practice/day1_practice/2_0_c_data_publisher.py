# day1_practice/day1_practice/2_0_c_data_publisher.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String
import time

class DataPublisher(Node):
    def __init__(self):
        super().__init__('data_publisher')
        self.pub = self.create_publisher(String, 'data', 10)
        self.timer = self.create_timer(0.1, self.publish_data)

    def publish_data(self):
        msg = String()
        msg.data = time.time()
        self.pub.publish(msg)

def main():
    rclpy.init()
    #
    node = DataPublisher()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()

