import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py.point_cloud2 import read_points_numpy
# from rclpy.qos import QoSProfile_sensor_data

class CloudPub(Node):
    def __init__(self):
        super().__init__('cloud_pub')
        self.create_subscription(PointCloud2, 'points', self.cb ,10)

    def cb(self, msg):
        xyz = read_points_numpy(msg, field_names=['x', 'y', 'z'], skip_nans = True)
        self.get_logger().info(f"점 개수 : {len(xyz)}")

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
