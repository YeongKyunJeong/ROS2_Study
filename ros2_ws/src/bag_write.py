# bag_write.py

import rosbag2_py
from rclpy.serialization import serialize_message
from std_msgs.msg import String

writer = rosbag2_py.SequentialWriter()

storage_option = rosbag2_py.StorageOptions(uri = "code_bag", storage_id = 'mcap')
convert_option = rosbag2_py.ConverterOptions(
    input_serialization_format='cdr',
    output_serialization_format='cdr'
)
writer.open(storage_option, convert_option)

topic_info = rosbag2_py.TopicMetadata(
    id = 0,
    name = '/chatter',
    type = 'std_msgs/msg/String',
    serialization_format='cdr'
)
writer.create_topic(topic_info)

for i in range(10):
    msg = String()
    msg.data = f"hello {i}"
    timestamp_ns = i*1_000_000_000
    writer.write("/chatter", serialize_message(msg), timestamp_ns)

del writer
print("녹화 완료")