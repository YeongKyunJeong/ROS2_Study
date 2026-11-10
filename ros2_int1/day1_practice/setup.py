from setuptools import find_packages, setup

package_name = 'day1_practice'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nonesense9999',
    maintainer_email='nonesense9999@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'image_publisher = day1_practice.2_0_a_image_publisher:main',
            'image_subscriber = day1_practice.2_0_b_image_subscriber:main',
            'data_publisher = day1_practice.2_0_c_data_publisher:main',
            'data_subscriber = day1_practice.2_0_d_data_subscriber:main',
            'beep_node = day1_practice.beep_node:main'
        ],
    },
)
