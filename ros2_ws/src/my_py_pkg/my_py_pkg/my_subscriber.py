# my_py_pkg/my_py_pkg/my_subscriber.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String

class MySubscriber(Node):
    def __init__(self):
        super().__init__('my_subscriber')
        self.create_subscription(String, '/chatter', self.cb, 10)

    def cb(self, msg):
        # 전달받은 메세지를 logger로 출력
        self.get_logger().info(f"수신 : {msg.data}")
        
def main():
    rclpy.init()
    node = MySubscriber()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        # 종료 시 처리
        pass
    finally: # 정상 동작 / 예외 동작 공통
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()