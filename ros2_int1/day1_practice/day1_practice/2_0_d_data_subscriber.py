# day1_practice/day1_practice/2_0_d_data_subscriber.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String
import time

class DataPublisher(Node):
    def __init__(self):
        super().__init__('data_publisher')
        self.sub = self.create_subscription(String, 'data', self.data_callback, 10)

    def data_callback(self):
        msg = String()
        msg.data = str(time.time())
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


