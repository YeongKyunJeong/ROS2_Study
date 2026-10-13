# my_py_pkg/my_py_pkg/calculator.py

# sub, service(operator를 받아서 연산하고 결과 리턴), 
# action(임계값을 사용자가 전달 -> 결과값이 임계값이 될 때까지 누적 -> 최대 누적값 반환)

import rclpy
from rclpy.node import Node
from my_interfaces.msg import ArithmeticArguments
from my_interfaces.srv import ArithmeticOperator

from rclpy.action import ActionServer
from my_interfaces.action import ArithmeticChecker
import time
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

class Calculator(Node):
    def __init__(self):
        super().__init__("calculator")
        self.argument_a = 0.0
        self.argument_b = 0.0
        self.argument_result = 0.0
        group = ReentrantCallbackGroup()
        self.create_subscription(ArithmeticArguments, "arithmetic_argument", self.on_argument , 10)
        self.create_service(ArithmeticOperator, "arithmetic_operator", self.on_operator, callback_group = group)
        ActionServer(self, ArithmeticChecker, "arithmetic_checker", self.on_check, callback_group = group)
        self.get_logger().info("========= Calculator Ready =========")

    def on_check(self, goal_handle):
        # goal_sum을 받음 -> argument_result 값 확인 -> 누적 값을 계산하여 피드백 송출, 최종값 리턴
        goal_sum = goal_handle.request.goal_sum
        self.get_logger().info(f"누적값 연산 진행 : 목표 임계값 : {goal_sum}")
        feedback = ArithmeticChecker.Feedback()
        total = 0.0
        while True:
            total += self.argument_result
            if total > goal_sum:
                total -= self.argument_result
                break
            feedback.current_num = total
            goal_handle.publish_feedback(feedback)
            time.sleep(1)
        goal_handle.succeed()
        result = ArithmeticChecker.Result()
        result.total_sum = total
        return result

    def on_argument(self, msg): # subscription callback
        self.argument_a = msg.argument_a
        self.argument_b = msg.argument_b
        self.get_logger().info(f"argument 수신 : {msg.argument_a}, {msg.argument_b}")

    def on_operator(self, req, res): # service callback, 오퍼레이터를 받아서 연산
        a, b = self.argument_a, self.argument_b
        if req.arithmetic_operator == ArithmeticOperator.Request.PLUS:
            self.argument_result = a + b
        res.arithmetic_result = self.argument_result
        self.get_logger().info(f"연산 대상 : {a} {b}, 연산 결과 : {self.argument_result}")
        return res

def main():
    rclpy.init()
    node = Calculator()
    try:
        rclpy.spin(node)
    except Exception as e:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()