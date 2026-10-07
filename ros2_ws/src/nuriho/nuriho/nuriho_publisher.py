# nuriho/nuriho/nuriho_publisher.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String

class nuriho_node(Node):

    def __init__(self):
        super().__init__('nuriho')
        self.alt = 0
        self.rocket_num = 0
        self.pub = self.create_publisher(String, '/chatter', 10)
        self.create_timer(0.5, self.tick)

    def tick(self):
        self.alt += 10
        self.get_logger().info(f"고도 '{self.alt} m'")
        if self.alt % 100 == 0:
            self.rocket_num += 1
            msg = String()
            msg.data = f"{self.rocket_num} 번째 로켓 분리"
            self.get_logger().info(f"발행 '{msg.data}'")
            self.pub.publish(msg)

def main():
    rclpy.init()
    node = nuriho_node()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        
if __name__ == "__main__":
    main()