# my_py_pkg/launch/bringup.launch.py

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(package="my_py_pkg", executable="my_publisher"),
            Node(package="my_py_pkg", executable="my_subscriber"),
            Node(package="my_py_pkg", executable="add_server"),
            Node(package="my_py_pkg", executable="add_client"),
            Node(package="my_py_pkg", executable="executor_demo"),
        ]
    )