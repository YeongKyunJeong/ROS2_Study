# my_py_pkg/launch/move.launch.py

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(package="my_py_pkg", executable="wheel_driver", output="screen"),
            Node(package="my_py_pkg", executable="fake_camera", output="screen"),
            Node(package="my_py_pkg", executable="camera_mount", output="screen"),
            Node(package="my_py_pkg", executable="chaser", output="screen"),
        ]
    )