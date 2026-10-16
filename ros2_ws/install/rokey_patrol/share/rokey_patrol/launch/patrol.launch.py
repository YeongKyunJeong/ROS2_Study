# rokey_patrol/launch/patrol.launch.py

from launch import LaunchDescription
from launch_ros.actions import Node

package_name = "rokey_patrol"

def generate_launch_description():
    return LaunchDescription(
        [
            Node(package = package_name, executable = 'robot_sensor',
                 parameters=[{"threshold":0.4, "base_temp":30.0}]),
            Node(package = package_name, executable = 'robot_patrol'),
        ]        
    )