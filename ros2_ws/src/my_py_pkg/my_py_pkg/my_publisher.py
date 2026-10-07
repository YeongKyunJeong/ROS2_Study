# my_py_pkg/my_py_pkg/my_publisher.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String

class MyPublisher(Node):
    def __init__(self):
        super().__init__('my_publisher')
        self.num = 1
        # pub
        self.pub = self.create_publisher(String, '/chatter', 10)
        # 일정 시간마다 실행 -> timer
        self.create_timer(1.0, self.tick)

    def tick(self):
        # 1. 전달할 메세지 생성
        # 2. pub를 통해 송출
        msg = String()
        msg.data = f"Hello ROS : {self.num}"
        self.get_logger().info(f"발행 '{msg.data}'") # 확인용 출력
        self.pub.publish(msg)
        self.num += 1
        

def main():
    rclpy.init()
    node = MyPublisher()
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