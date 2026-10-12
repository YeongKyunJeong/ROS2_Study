# my_py_pkg/my_py_pkg/param_demo.py

import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult

class ParamDemo(Node):
    def __init__(self):
        super().__init__('param_demo')
        # speed, robot_name 키의 param을 생성
        # topic 1초마다 pub
        self.declare_parameter('speed', 1.0)
        self.declare_parameter('robot_name', "alpha")
        self.create_timer(1.0, self.tick)
        self.add_on_set_parameters_callback(self.on_set)
    def tick(self):
        speed = self.get_parameter('speed').value
        robot_name = self.get_parameter('robot_name').value
        self.get_logger().info(f"로봇 이름 : {robot_name} / 속도 : {speed}")
    def on_set(self, params):
        for p in params:
            if p.name == 'speed' and p.value < 0 :
                return SetParametersResult(successful = False, reason = "속도는 양수여야 합니다.")
        return SetParametersResult(successful = True)

def main():
    rclpy.init()
    node = ParamDemo()
    try:
        rclpy.spin(node)
    except:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        
if __name__ == "__main__":
    main()        