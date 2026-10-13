# my_py_pkg/my_py_pkg/argument.py

# topic을 통해 랜덤 숫자 2개 송출

import rclpy
from rclpy.node import Node
from my_interfaces.msg import ArithmeticArguments
from rcl_interfaces.msg import SetParametersResult
import random

class Argument(Node):
    def __init__(self):
        super().__init__("argument")
        # min, max 설정 -> 랜덤값 추출
        self.declare_parameter("min_random_num", 1)
        self.declare_parameter("max_random_num", 9)
        self.min_random_num = self.get_parameter("min_random_num").value
        self.max_random_num = self.get_parameter("max_random_num").value
        # 1초 타이머
        # 콜백 -> 두 개의 숫자 추출 -> pub
        self.create_timer(1.0, self.on_timer)
        self.pub = self.create_publisher(ArithmeticArguments, "arithmetic_argument", 10)
        self.add_on_set_parameters_callback(self.on_set)

    def on_timer(self):
        msg = ArithmeticArguments()
        self.min_random_num = self.get_parameter("min_random_num").value
        self.max_random_num = self.get_parameter("max_random_num").value
        msg.argument_a = float(random.randint(self.min_random_num, self.max_random_num))
        msg.argument_b = float(random.randint(self.min_random_num, self.max_random_num))
        self.pub.publish(msg)
        self.get_logger().info(f"발행 : a = {msg.argument_a}, b = {msg.argument_b}")

        # ros2 param set /argument max_random_num 100
    def on_set(self, params):
        low, high = self.min_random_num, self.max_random_num
        for p in params:
            if p.name == "min_random_num" and p.value > high:
                return SetParametersResult(successful = False, reason = "잘못된 값")
            elif p.name == "max_random_num" and p.value < low:
                return SetParametersResult(successful = False, reason = "잘못된 값")
        return SetParametersResult(successful = True)




def main():
    rclpy.init()
    node = Argument()
    try:
        rclpy.spin(node)
    except Exception:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()