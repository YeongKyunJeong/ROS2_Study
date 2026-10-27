import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py.point_cloud2 import read_points_numpy
from geometry_msgs.msg import TwistStamped
import open3d as o3d
import numpy as np

class TurtlebotDrive(Node):
    def __init__(self):
        super().__init__('turtlebot_drive')
        self.declare_parameter('stop_dist', 0.5)
        self.create_subscription(PointCloud2, 'points', self.cb, 10)
        self.pub = self.create_publisher(TwistStamped, 'cmd_val', 10)

    def cb(self, msg):
        pass

def main():
    rclpy.init()
    node = TurtlebotDrive()

    try:
        rclpy.spin(node)
    except Exception as e:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()