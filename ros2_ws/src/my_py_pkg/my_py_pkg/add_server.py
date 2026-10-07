# my_py_pkg/my_py_pkg/add_server.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import String
from example_interfaces.srv import AddTwoInts

class AddServer(Node):
    def __init__(self):
        super().__init__("add_server")
        # 두 숫자가 들어오면(요청) 더해서 응답 -> service
        # 서비스 서버 생성
        # 콜백 생성 - 두 숫자 더하기
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.on_request)
        self.get_logger().info("요청 준비 완료")

    def on_request(self, req, res):
        sum = req.a + req.b 
        res.sum = sum
        self.get_logger().info(f"{req.a} + {req.b} = {req.sum}")
        return res
        
def main():
    rclpy.init()
    node = AddServer()
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