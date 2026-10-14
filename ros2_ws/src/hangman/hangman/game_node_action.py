# src/my_py_pkg/my_py_pkg/game_node_action.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.executors import ExternalShutdownException
from rclpy.action import ActionServer
from my_interfaces.action import PlayRound
from my_interfaces.srv import RoundGuess
import time

from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

class RoundNode(Node):
    def __init__(self):
        super().__init__('game_node_action')
        self.answer = "dummy"
        self.last_letter = ""
        self.pre_letter == ""
        self.last_board = ""
        self.done = False
        self.found = set()
        self.group = ReentrantCallbackGroup()
        ActionServer(self, PlayRound, "play_round", self.execute_callback, callback= self.group)
        self.create_service(RoundGuess, "guess_letter", self.on_guess)

    def on_guess(self, req, res):
        # 문자를 수신 -> 정답 확인
        letter = req.letter.strip().lower()
        self.last_letter = letter
        if len(letter) != 1:
            self.get_logger().info("한 글자만 입력해주세요.")
            res.correct = False
            res.board = "한 글자만 입력해주세요."
            return res

        if letter in self.answer:
            self.found.add(letter)
            self.get_logger().info(f"정답 : {letter}")
            res.correct = True
            self.last_board = " ".join(ch if ch in self.found else "_" for ch in self.answer)
            res.board = self.last_board
            self.done = all(ch in self.found for ch in self.answer)
            res.done = self.done
            return res
        else:
            self.get_logger().info(f"오답 : {letter}")
            res.correct = False
            res.board = " ".join(ch if ch in self.found else "_" for ch in self.answer)
            return res
    
    def execute_callback(self, goal_handle):
        # goal 받기 -> 전달된 값 확인 -> 반복 -> 결과
        self.answer = goal_handle.request.word
        tries = 0
        fb = PlayRound.Feedback()
        # found = set(), 들어온 문자를 확인해서 answer에 있으면 found에 넣기
        # 들어오는 값을 확인해 비교, 처리 => 들어오는 값으로 피드백 전송
        self.get_logger().info("문제가 설정됐습니다. 정답을 맞춰보세요.")
        # 새로 들어온 문자를 감지, 변화된 board 상황을 피드백
        while not self.done:
            # 기존 문자, 새로운 문자 확인 -> 문자와 board를 만들고 피드백
            if self.pre_letter != self.last_letter:
                # 피드백을 전달 (현재 들어온 문자, board)
                fb.letter = self.last_letter
                fb.board_progress = self.last_board
                goal_handle.publish_feedback(fb)
                self.pre_letter = self.last_letter   
                tries += 1             
            else: # 두 문자가 같을 땐 피드백 X
                pass
            time.sleep(1)
        goal_handle.succeed()
        result = PlayRound.Result()
        result.board_result = self.last_board
        result.done = self.done
        result.tries = tries
        return result

def main():
    rclpy.init()
    node = RoundNode()
    try:
        ex = MultiThreadedExecutor()
        ex.add_node(node)
        ex.spin()
    except (ExternalShutdownException, KeyboardInterrupt) as e:
        print(e)
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__=="__main__":
    main()
