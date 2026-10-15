# hangman/launch/hangman.launch.py

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(package="hangman", executable="game_node"),
            Node(package="hangman", executable="game_client"),
        ]
    )