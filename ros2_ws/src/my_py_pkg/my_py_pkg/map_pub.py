# my_py_pkg/my_py_pkg/map_pub.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy, HistoryPolicy

class MapHub(Node):
    def __init__(self):
        super().__init__('map_pub')
        # map_qos = QoSProfile(reliability = ReliabilityPolicy.RELIABLE,
        #                      durability = DurabilityPolicy.VOLATILE,
        #                      depth = 10)
        map_qos = QoSProfile(reliability = ReliabilityPolicy.RELIABLE,
                             durability = DurabilityPolicy.TRANSIENT_LOCAL,
                             depth = 10)
        self.pub = self.create_publisher(String, 'map_info', map_qos)
        self.get_logger().info("MapPub 노드 실행 중")           
        self.timer = self.create_timer(1, self.pub_map_info)

    def pub_map_info(self):
        msg = String()
        msg.data = "광화문 지역에 마라톤 대회가 있어 차량이 이동할 수 없습니다."
        self.pub.publish(msg)
        self.get_logger().info("메시지 정상 전달")
        self.timer.cancel()

def main():
    rclpy.init()
    node = MapHub()
    try:
        rclpy.spin(node)
    except:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()