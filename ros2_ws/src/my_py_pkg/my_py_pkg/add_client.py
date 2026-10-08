# my_py_pkg/my_py_pkg/add_client.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String
from example_interfaces.srv import AddTwoInts

class AddClient(Node):
    def __init__(self):
        super().__init__("add_client")
        # AddServer에 요청을 보내는 클라이언트 -> a = 100, b = 200 보내기
        # 클라이언트 생성
        # 서버 확인 -> 요청 보내기 -> 응답 받기
        self.cli = self.create_client(AddTwoInts, 'add_two_ints')
        # 클라이언트가 서비스 요청 -> 응답 없으면 계속 요청
        while not self.cli.wait_for_service(timeout_sec=1.0): # 응답이 없는 동안
            self.get_logger().info("서버 응답 대기 중...")
        
        # 응답시 요청 보내기

    def send(self, a, b):
        req = AddTwoInts.Request()
        req.a = a
        req.b = b
        future = self.cli.call_async(req) # 비동기로 대기
        rclpy.spin_until_future_complete(self, future) # 노드, future
        return future.result()
        
def main():
    rclpy.init()
    node = AddClient()
    ret = node.send(100, 200)
    node.get_logger().info(f"{ret.sum}")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()