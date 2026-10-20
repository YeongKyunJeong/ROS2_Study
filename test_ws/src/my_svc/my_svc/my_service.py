# my_srv/my_srv/my_service.py

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(
            AddTwoInts,
            'add_two_ints',
            self.add_two_ints_callback
        )

    def add_two_ints_callback(self, req, res):
        res.sum = req.a + req.b
        self.get_logger().info(
            f'Incoming request a : {req.a}, b : {req.b}'
        )
        return res

def main(args = None):
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    minimal_service.destroy_node()
    rclpy.try_shutdown()


if __name__ == '__main__':
    main()