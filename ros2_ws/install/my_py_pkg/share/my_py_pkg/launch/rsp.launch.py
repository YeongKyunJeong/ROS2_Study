# my_py_pkg/launch/rsp.launch.py

import os
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    urdf_path = os.path.expanduser('~/ROKEY/ROS2/ROS2_Study/ros2_ws/simple_arm.urdf')
    with open(urdf_path) as f:
        robot_description = f.read()
    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_description}],
        ),
    ])