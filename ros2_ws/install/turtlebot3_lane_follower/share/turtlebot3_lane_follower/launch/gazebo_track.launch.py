#!/usr/bin/env python3
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import AppendEnvironmentVariable, DeclareLaunchArgument, IncludeLaunchDescription, SetEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    pkg_lane_follower = get_package_share_directory('turtlebot3_lane_follower')
    pkg_tb3_gazebo = get_package_share_directory('turtlebot3_gazebo')
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    # 기본 모델 환경변수 설정 (지정되어 있지 않으면 waffle_pi 사용)
    turtlebot3_model = os.environ.get('TURTLEBOT3_MODEL', 'waffle_pi')
    set_tb3_model = SetEnvironmentVariable('TURTLEBOT3_MODEL', turtlebot3_model)

    # Launch Configurations
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    # Track 1 기준 최적 출발 좌표 (우측 차선 스타트라인 정렬)
    x_pose = LaunchConfiguration('x_pose', default='-3.6')
    y_pose = LaunchConfiguration('y_pose', default='3.2')
    yaw = LaunchConfiguration('yaw', default='0.0')

    # World 파일 경로
    world_path = os.path.join(pkg_lane_follower, 'worlds', 'track_world.world')

    # Gazebo Sim Resource Path (터틀봇 모델 + 커스텀 트랙 모델 경로 등록)
    models_dir = os.path.join(pkg_lane_follower, 'models')
    tb3_models_dir = os.path.join(pkg_tb3_gazebo, 'models')
    
    append_resource_path = AppendEnvironmentVariable(
        'GZ_SIM_RESOURCE_PATH',
        f"{models_dir}:{tb3_models_dir}"
    )

    # 1. Gazebo Server 실행
    gzserver_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': ['-r -s -v2 ', world_path], 'on_exit_shutdown': 'true'}.items()
    )

    # 2. Gazebo GUI Client 실행
    gzclient_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': '-g -v2'}.items()
    )

    # 3. Robot State Publisher (URDF/TF 발행)
    robot_state_publisher_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_tb3_gazebo, 'launch', 'robot_state_publisher.launch.py')
        ),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # 4. TurtleBot3 Spawn (로봇 소환 및 카메라 토픽 브릿지 자동 연결)
    spawn_turtlebot_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_tb3_gazebo, 'launch', 'spawn_turtlebot3.launch.py')
        ),
        launch_arguments={
            'x_pose': x_pose,
            'y_pose': y_pose,
        }.items()
    )

    ld = LaunchDescription()
    ld.add_action(set_tb3_model)
    ld.add_action(append_resource_path)
    ld.add_action(gzserver_cmd)
    ld.add_action(gzclient_cmd)
    ld.add_action(robot_state_publisher_cmd)
    ld.add_action(spawn_turtlebot_cmd)

    return ld
