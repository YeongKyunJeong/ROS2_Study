from setuptools import find_packages, setup

package_name = 'my_py_pkg'

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
            'add_server = my_py_pkg.add_server:main'
            # 실행 이름     = 실행 패키지명.파일명:함수명명
        ],
    },
)
