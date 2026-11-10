# turtlebot4_beep/turtlebot4_beep/beep_node.py

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from builtin_interfaces.msg import Duration
from irobot_create_msgs.msg import AudioNote, AudioNoteVector

class Turtlebot4Beep(Node):
    def __init__(self):
        super().__init__('beep_node')

        self.pub = self.create_publisher(AudioNoteVector, 'cmd_audio', 10)
        self.timer = self.create_timer(2.0, self.publish_beep)

        self.get_logger().info(f"오디오 토픽: {self.pub.topic_name}")

    def publish_beep(self):
        msg = AudioNoteVector()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.append = False

        for freq in (880, 440, 880, 440):
            note = AudioNote()
            note.frequency = freq
            note.max_runtime = Duration(sec = 0, nanosec = 300_000_000)
            msg.notes.append(note)

        self.pub.publish(msg)
        self.get_logger().info("Beep 재생 요청")

def main():
    rclpy.init()
    #
    node = Turtlebot4Beep()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()
