# rokey_patrol/rokey_patrol/robot_sensor.py

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from std_msgs.msg import Float64
import random

class RobotSensor(Node):
    def __init__(self):
        super().__init__('robot_sensor')

        self.declare_parameter("threshold", 0.1)
        self.declare_parameter("base_temp", 25.0)
        self.declare_parameter("abnormal_temp", 55.0)

        self.temperature = 25.0
        self.pub = self.create_publisher(Float64, 'robot/temperature', 10)
        self.create_timer(1, self.measure)
        self.get_logger().info("SensorNode 준비 완료")

    def measure (self):
        if random.random() < self.get_parameter("threshold").value:
            self.temperature = random.uniform(
                self.get_parameter("abnormal_temp" ).value - 5, 
                self.get_parameter("abnormal_temp" ).value + 5)
        else:
            self.temperature = self.get_parameter("base_temp").value + random.uniform(-1, 1)
        msg = Float64()
        msg.data = self.temperature
        self.pub.publish(msg)
        self.get_logger().info(f"현재 온도 : {self.temperature}")
        
        
def main():
    rclpy.init()
    node = RobotSensor()
    try:
        rclpy.spin(node)
    except Exception as e:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()
