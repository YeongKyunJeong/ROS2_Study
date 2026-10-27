"""Split /points into /ground and /objects using Open3D RANSAC."""

import numpy as np
import open3d as o3d
import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py.point_cloud2 import create_cloud_xyz32, read_points_numpy


def split_cloud(xyz):
    """Find a ground-like plane; assume an upright lidar on a level robot."""
    xyz = np.asarray(xyz).reshape(-1, 3)
    xyz = xyz[np.isfinite(xyz).all(axis=1)]
    pcd = o3d.geometry.PointCloud()
    pcd.points = o3d.utility.Vector3dVector(xyz.astype(np.float64))
    pcd = pcd.voxel_down_sample(0.01)
    points = np.asarray(pcd.points)
    ground_mask = np.zeros(len(points), dtype=bool)
    # Ignore points above the lidar when selecting a floor candidate.
    remaining = np.flatnonzero(points[:, 2] < -0.05)
    for _ in range(5):
        if len(remaining) < 3:
            break
        candidates = pcd.select_by_index(remaining.tolist())
        plane, inliers = candidates.segment_plane(
            distance_threshold=0.02, ransac_n=3, num_iterations=300)
        if len(inliers) < 3:
            break
        normal = np.asarray(plane[:3])
        length = np.linalg.norm(normal)
        if length > 0 and abs(normal[2]) / length >= np.cos(np.deg2rad(20)):
            ground_mask = ((np.abs(points @ normal + plane[3]) / length < 0.02)
                           & (points[:, 2] < -0.05))
            break
        # A wall can be the largest plane: try the remaining points next.
        remaining = np.delete(remaining, inliers)
    return (points[ground_mask].astype(np.float32),
            points[~ground_mask].astype(np.float32))


class O3DNode(Node):
    def __init__(self):
        super().__init__('o3d_node')
        self.subscription = self.create_subscription(
            PointCloud2, 'points', self.cb, qos_profile_sensor_data)
        self.pub_ground = self.create_publisher(PointCloud2, 'ground', 10)
        self.pub_objects = self.create_publisher(PointCloud2, 'objects', 10)

    def cb(self, msg):
        xyz = read_points_numpy(msg, field_names=['x', 'y', 'z'], skip_nans=False)
        ground, objects = split_cloud(xyz)
        self.pub_ground.publish(create_cloud_xyz32(msg.header, ground))
        self.pub_objects.publish(create_cloud_xyz32(msg.header, objects))
        self.get_logger().info(
            f'ground: {len(ground)}, objects: {len(objects)}', throttle_duration_sec=2.0)


def main(args=None):
    rclpy.init(args=args)
    node = O3DNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
