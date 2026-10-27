"""Spawn Waffle Pi with a 16-channel GPU lidar in TurtleBot3 world."""

from pathlib import Path
import xml.etree.ElementTree as ET

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    AppendEnvironmentVariable, DeclareLaunchArgument, IncludeLaunchDescription,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def make_3d_lidar_sdf(model_path):
    """Change the installed model in memory; leave the original SDF untouched."""
    root = ET.parse(model_path).getroot()
    sensor = root.find("./model/link[@name='base_scan']/sensor[@type='gpu_lidar']")
    if sensor is None:
        raise RuntimeError('Waffle Pi model does not contain the expected GPU lidar')
    sensor.set('name', 'lidar_3d')
    # Keep the GPU rays above the stock LDS mesh and the robot body.
    sensor.find('pose').text = '-0.064 0 0.30 0 0 0'
    sensor.find('pose').set('relative_to', 'base_link')
    sensor.find('topic').text = 'lidar_3d'
    sensor.find('visualize').text = 'false'
    scan = sensor.find('ray/scan')
    if scan is None:
        scan = sensor.find('lidar/scan')
    if scan is None:
        raise RuntimeError('GPU lidar scan configuration is missing')
    horizontal = scan.find('horizontal')
    horizontal.find('samples').text = '720'
    horizontal.find('min_angle').text = '-3.141592653589793'
    horizontal.find('max_angle').text = '3.141592653589793'
    vertical = scan.find('vertical')
    if vertical is None:
        vertical = ET.SubElement(scan, 'vertical')
    for tag, value in (
        ('samples', '16'), ('resolution', '1'),
        ('min_angle', '-0.2617993877991494'),
        ('max_angle', '0.2617993877991494'),
    ):
        element = vertical.find(tag)
        if element is None:
            element = ET.SubElement(vertical, tag)
        element.text = value
    return ET.tostring(root, encoding='unicode')


def generate_launch_description():
    """Start Gazebo, spawn the modified model, and bridge its point cloud."""
    tb3 = Path(get_package_share_directory('turtlebot3_gazebo'))
    package = Path(get_package_share_directory('my_first_package'))
    gz_launch = str(Path(get_package_share_directory('ros_gz_sim')) /
                    'launch' / 'gz_sim.launch.py')
    model = make_3d_lidar_sdf(tb3 / 'models/turtlebot3_waffle_pi/model.sdf')
    robot = ET.parse(tb3 / 'urdf/turtlebot3_waffle_pi.urdf').getroot()
    # PointCloud2 uses base_scan: its TF must match the raised sensor.
    robot.find("./joint[@name='scan_joint']/origin").set('xyz', '-0.064 0 0.30')
    # Keep the stock LDS visual at its original position on the body.
    for origin in robot.findall("./link[@name='base_scan']/*/origin"):
        xyz = [float(value) for value in origin.get('xyz').split()]
        xyz[2] -= 0.178
        origin.set('xyz', ' '.join(str(value) for value in xyz))
    robot_description = ET.tostring(robot, encoding='unicode')
    use_sim_time = LaunchConfiguration('use_sim_time')

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        DeclareLaunchArgument('gui', default_value='true'),
        DeclareLaunchArgument('segmentation', default_value='true'),
        DeclareLaunchArgument('x_pose', default_value='-2.0'),
        DeclareLaunchArgument('y_pose', default_value='-0.5'),
        Node(
            package='my_first_package', executable='o3d_node', output='screen',
            condition=IfCondition(LaunchConfiguration('segmentation')),
            parameters=[{'use_sim_time': use_sim_time}],
        ),
        AppendEnvironmentVariable('GZ_SIM_RESOURCE_PATH', str(tb3 / 'models')),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(gz_launch),
            launch_arguments={
                'gz_args': ['-r -s -v2 ', str(package / 'worlds/turtlebot3_world_3d_lidar.world')],
                'on_exit_shutdown': 'true',
            }.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(gz_launch),
            condition=IfCondition(LaunchConfiguration('gui')),
            launch_arguments={
                'gz_args': '-g -v2', 'on_exit_shutdown': 'true',
            }.items(),
        ),
        Node(
            package='robot_state_publisher', executable='robot_state_publisher',
            output='screen', parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description': ParameterValue(robot_description, value_type=str),
            }],
        ),
        Node(
            package='ros_gz_sim', executable='create', output='screen',
            arguments=[
                '-name', 'waffle_pi', '-string', model,
                '-x', LaunchConfiguration('x_pose'),
                '-y', LaunchConfiguration('y_pose'), '-z', '0.01',
            ],
        ),
        Node(
            package='ros_gz_bridge', executable='parameter_bridge', output='screen',
            parameters=[{
                'config_file': str(package / 'config/turtlebot3_3d_lidar_bridge.yaml'),
                'use_sim_time': use_sim_time,
            }],
        ),
        Node(
            package='ros_gz_image', executable='image_bridge', output='screen',
            arguments=['/camera/image_raw'],
            parameters=[{'use_sim_time': use_sim_time}],
        ),
    ])
