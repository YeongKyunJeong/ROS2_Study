# rokey_patrol/rokey_patrol/robot_patrol.py

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from std_msgs.msg import Float64
from std_srvs.srv import Trigger
from my_interfaces.action import PatrolAction
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import time

class RobotPatrol(Node):
    def __init__(self):
        super().__init__('robot_patrol')
        self.zone = {"a" : [1, 1, 2, 2], "b" : [2, 1, 2, 1, 2]}
        self.declare_parameter("limit", 50.0)
        self.group = ReentrantCallbackGroup()
        self.current_temp = 0.0
        self.issue_count = 0
        self.patrol_count = 0
        ActionServer(self, PatrolAction, "robot/patrol", self.patrol, callback_group= self.group)
        self.create_subscription(Float64, 'robot/temperature',
                                  self.on_temp, 10, callback_group = self.group)
        self.create_service(Trigger, 'robot/report', self.report, callback_group= self.group)
    
    def report(self, req, res) : 
        content = f"""
        =========== 순찰 보고서 ===========
        - 전체 순찰 횟수 : {self.patrol_count}
        - 전체 이슈 횟수 : {self.issue_count}



        ------- Rokey Patrol inc. -------
        """
        res.success = True
        res.message = content
        return res

    def on_temp(self, msg):
        self.current_temp = msg.data
        self.get_logger().info(f"현재 감지 온도 : {msg.data}")

    def patrol(self, goal_handle):
        mission_zone = goal_handle.request.zone
        patrol_map = self.zone[mission_zone]
        fb = PatrolAction.Feedback()
        limit = self.get_parameter("limit").value
        is_issue = False
        for room_idx, room_importance in enumerate(patrol_map):
            time.sleep(room_importance)
            self.patrol_count += 1            
            self.get_logger().info(f"{room_idx + 1} 번째 방에서 {room_importance}분간 순찰")

            fb.zone = mission_zone
            if self.current_temp > limit:
                self.issue_count += 1
                fb.is_issue = True
                fb.report = f"========== {room_idx + 1} 번째 방에 화재 발생 =========="
                is_issue = True
                goal_handle.publish_feedback(fb)
            else:
                fb.is_issue = False
                fb.report = "no_issue"
                goal_handle.publish_feedback(fb)
        goal_handle.succeed()
        result = PatrolAction.Result()
        result.is_issue = result.is_issue = True if is_issue else False
        result.zone = mission_zone
        result.report = f'{mission_zone} 지역 순찰 완료'
        return result
        
def main():
    rclpy.init()
    node = RobotPatrol()
    ex = MultiThreadedExecutor()
    try:
        ex.add_node(node)
        ex.spin()    
    except Exception as e:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == "__main__":
    main()
