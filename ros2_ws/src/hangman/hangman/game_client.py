# hangman/hangman/game_client.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class GameClient(Node):
    def __init__(self):
        super().__init__('game_client')
        # pub. timer, 알파벳 모음 콜백
        self.alphabets = list('abcdefghijklmnopqrstuvwxyz')

        # letter = chr(ord('a') + random.randint(0, 25))
        self.pub = self.create_publisher(String, "guess", 10)
        self.create_timer(2, self.tick)
        self.get_logger().info("Client 작업 시작")

    def tick(self):
        # 알파벳에서 문자 하나씩을 뽑아 pub
        if self.alphabets:
            letter = self.alphabets.pop(0) # letter = 'a'
            msg = String()
            msg.data = letter
            self.pub.publish(msg)
            self.get_logger().info(f"현재 pub letter : {letter}")
        else:
            self.get_logger().info(f"알파벳을 다 사용함")
            raise Exception

def main():
    rclpy.init()
    node = GameClient()
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