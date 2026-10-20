# my_py_pkg/my_py_pkg/qos_talker.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class QosTalker(Node):
    def __init__(self):
        super().__init__('qos_talker')

        self.num = 0
        # qos = QoSProfile(reliability = ReliabilityPolicy.RELIABLE,
        #                  history = HistoryPolicy.KEEP_LAST, depth = 10)
        qos = QoSProfile(reliability = ReliabilityPolicy.BEST_EFFORT,
                         history = HistoryPolicy.KEEP_LAST, depth = 10)
        self.pub = self.create_publisher(String, 'qos_chat', qos)
        self.create_timer(1.0, self.tick)

    def tick(self):
        msg = String()
        msg.data  = f"QoS Test : {self.num}"
        self.pub.publish(msg)
        self.num += 1
        self.get_logger().info(f"QoS Test : {self.num}")


def main():
    rclpy.init()
    node = QosTalker()

    try:
        rclpy.spin(node)
    except:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()