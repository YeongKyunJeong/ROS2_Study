# my_py_pkg/launch/composition.launch.py

from launch import LaunchDescription
# from launch_ros.actions import Node
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    return LaunchDescription(
        [
            ComposableNodeContainer(
                package = 'rclcpp_components',
                namespace='my_ns',
                arguments = ['--ros-args', '--log-level', 'rcl:=debug'],
                # --ros-args --log-level rcl:=debug
                executable = 'component_container',
                name = 'my_container',
                composable_node_descriptions = [
                    ComposableNode(
                        package = 'composition',
                        plugin = 'composition::Talker',
                        name = 'my_talker',
                        extra_arguments=[{'use_intra_process_comms': True}],
                        # extra_arguments=[{'use_intra_process_comms': False}],
                    ),
                    ComposableNode(
                        package = 'composition',
                        plugin = 'composition::Listener',
                        name = 'my_listener',
                        extra_arguments=[{'use_intra_process_comms': True}],
                        # extra_arguments=[{'use_intra_process_comms': False}],
                    )
                ]
            )
        ]
    )