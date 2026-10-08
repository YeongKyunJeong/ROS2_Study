# my_py_pkg/my_py_pkg/executor_demo.py

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
import time

# executor, group
USE_MULTI = False
SPLIT_GROUP = False

class ExecutorDemo(Node):
    def __init__(self):
        super().__init__('executor_demo')
        self.n = 1
        slow_group = MutuallyExclusiveCallbackGroup() if SPLIT_GROUP else None
        self.create_timer(0.5, self.fast_cb)
        self.create_timer(2.0, self.slow_cb, callback_group = slow_group)

    def fast_cb(self):
        self.get_logger().info(f"fast_cb : {self.n}")
        self.n += 1

    def slow_cb(self):
        self.get_logger().error(f"slow_cb 시작 : {self.n}")
        time.sleep(2)
        self.get_logger().error(f"slow_cb : {self.n}")
        self.n += 1

def main():
    rclpy.init()
    node = ExecutorDemo()
    try:
        if USE_MULTI:
            ex = MultiThreadedExecutor()
            ex.add_node(node)
            ex.spin()
        else:
            rclpy.spin(node)
    except:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

