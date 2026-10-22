from setuptools import find_packages, setup
from glob import glob

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # ('share/' + package_name + '/launch', ['launch/bringup.launch.py']),
        ('share/' + package_name + '/launch', glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nonsense',
    maintainer_email='stararia9999@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'my_publisher = my_py_pkg.my_publisher:main',
            'my_subscriber = my_py_pkg.my_subscriber:main',
            'add_server = my_py_pkg.add_server:main',
            'add_client = my_py_pkg.add_client:main',
            'executor_demo = my_py_pkg.executor_demo:main',
            'count_up_server = my_py_pkg.count_up_server:main',
            'count_up_client = my_py_pkg.count_up_client:main',
            'param_demo = my_py_pkg.param_demo:main',
            'clac_server = my_py_pkg.clac_server:main',
            'argument = my_py_pkg.argument:main',
            'calculator = my_py_pkg.calculator:main',
            'qos_talker = my_py_pkg.qos_talker:main',
            'qos_listener = my_py_pkg.qos_listener:main',
            "static_sensor_tf=my_py_pkg.static_sensor_tf:main",
            "tf_reader=my_py_pkg.tf_reader:main",
            "wheel_driver=my_py_pkg.wheel_driver:main",
            "chaser=my_py_pkg.chaser:main",
            "camera_mount=my_py_pkg.camera_mount:main",
            "fake_camera=my_py_pkg.fake_camera:main",
            # 실행 이름     = 실행 패키지명.파일명:함수명명
        ],
    },
)
