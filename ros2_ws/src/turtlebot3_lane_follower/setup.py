from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'turtlebot3_lane_follower'

def get_data_files():
    data_files = [
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'worlds'), glob('worlds/*.world')),
    ]
    # models 디렉토리 하위의 모든 파일들을 share에 복사
    for root, dirs, files in os.walk('models'):
        for file in files:
            source_file = os.path.join(root, file)
            dest_dir = os.path.join('share', package_name, root)
            data_files.append((dest_dir, [source_file]))
    return data_files

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=get_data_files(),
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hans',
    maintainer_email='user@todo.todo',
    description='TurtleBot3 Autonomous Driving Lane Follower using OpenCV and Gazebo',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'lane_follower = turtlebot3_lane_follower.lane_follower:main',
        ],
    },
)
