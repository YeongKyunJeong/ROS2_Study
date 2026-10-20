# my_srv/my_srv/my_client.py

import rclpy
import sys
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(AddTwoInts,'add_two_ints')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info("service not available, waiting...")
        self.req = AddTwoInts.Request()

    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b
        return self.cli.call_async(self.req)
        
def main(args = None):
    rclpy.init()
    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(
        int(sys.argv[1]),   # 터미널에서 입력하는 숫자열 1
        int(sys.argv[2]))   # 터미널에서 입력하는 숫자열 2
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        f"Result of add two ints : for {sys.argv[1]} + {sys.argv[2]} = {response.sum}"
    )
    minimal_client.destroy_node()
    rclpy.try_shutdown()

if __name__ == '__main__':
    main()