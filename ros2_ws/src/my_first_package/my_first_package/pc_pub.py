import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py import point_cloud2
from std_msgs.msg import Header
import numpy as np
# from rclpy.qos import QoSProfile_sensor_data

class CloudPub(Node):
    def __init__(self):
        super().__init__('cloud_pub')
        self.pub = self.create_publisher(PointCloud2, 'points', 10)
        self.create_timer(0.5, self.tick)

    def make_points(self, n = 12000):
        ground = np.random.uniform(-1., 1., size = (n, 3))
        ground[:, 2] = np.random.normal(0, 0.005, size = n)
        cube = np.random.uniform(0.0, 0.3, size = (n // 6, 3))
        cube[:,2] += 0.1
        return np.vstack([ground, cube]).astype(np.float32)

    def tick(self):
        pts = self.make_points()
        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = 'map'
        msg = point_cloud2.create_cloud_xyz32(header = header, points = pts)
        self.pub.publish(msg)
        self.get_logger().info(f"PointCloud Pub : {len(pts)} 개의 점 발행")

def main():
    rclpy.init()
    node = CloudPub()
    try:
        rclpy.spin(node)
    except Exception as e:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__=='__main__':
    main()
