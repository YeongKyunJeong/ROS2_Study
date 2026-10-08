from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(package="my_py_pkg", executable="my_subscriber", name = f"robot{i}")
            for i in range(3)
        ] +
        [ Node(package="my_py_pkg", executable="my_publisher") ]
    )