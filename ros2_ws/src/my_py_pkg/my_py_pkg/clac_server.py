# my_py_pkg/my_py_pkg/clac_server.py

import rclpy
from rclpy.node import Node
from my_interfaces.srv import Calc

class CalcServer(Node):
    def __init__(self):
        super().__init__("calc_server")
        self.create_service(Calc, 'calc', self.on_request)
        self.get_logger().info("======계산기 대기중=======")
    def on_request(self, request, response):
        # request가 a, b, op
        a = request.a
        b = request.b
        op = request.op
        # op에 따라 계산을 진행하여 응답값 생성
        if op == "+":
            result = a + b
            response.ok = True 
        elif op == "-":
            result = a - b
            response.ok = True 
        elif op == "*":
            result = a * b
            response.ok = True 
        elif op == "/" and b != 0:
            result = a / b
            response.ok = True  
        else:
            response.ok = False
        self.get_logger().info(f"계산 결과 : {response.ok}")
        return response


def main():
    rclpy.init()
    node = CalcServer()
    try:
        rclpy.spin(node)
    except Exception:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()