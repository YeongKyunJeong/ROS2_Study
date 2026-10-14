# hangman/hangman/game_node.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class GameNode(Node):
    def __init__(self):
        super().__init__('game_node')
        # 정답 미리 세팅
        self.answer = 'rokey'
        # 게임이 진행되는 동안 들어왔던 추측값들을 종합
        self.found = set()
        # sub : 추측값, pub : 게임 진행 상황 송출
        self.create_subscription(String, "guess", self.on_guess, 10)
        self.pub = self.create_publisher(String, "board", 10)

    def on_guess(self, msg):
        # letter를 전달 받음 -> answer 내용과 매칭 -> 맞으면 found 등록 -> 틀리면 넘김
        # 결과 송출
        letter = msg.data.strip().lower()
        if len(letter) != 1:
            self.get_logger().info("한 글자만 들어와야 합니다.")
        if letter in self.answer:
            self.found.add(letter)
            self.get_logger().info(f"정답 : {letter}")
        else:
            self.get_logger().info(f"오답 : {letter}")
        # publisher : msg로 구성 -> 값을 채우고 (r _ _ _ _) 송출
        board_msg = String()
        board_msg.data, done = self.check_board()
        self. pub.publish(board_msg)
        # 완료 : answer의 모든 문자가 found에 있으면 다 찾은 것
        if done :
            self.get_logger().info("단어 완성")
            msg = String()
            msg.data = "단어 완성"
            self.pub.publish(msg)
            raise Exception 

    def check_board(self):
        done = all(ch in self.found for ch in self.answer)
        return " ".join(ch if ch in self.found else "_" for ch in self.answer), done

def main():
    rclpy.init()
    node = GameNode()
    try:
        rclpy.spin(node)
    except Exception as e:
        print(e)
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__=="__main__":
    main()