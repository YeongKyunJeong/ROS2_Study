# my_interfaces/msg/RobotState.msg

int8 STATE_IDLE = 0     # 상수 : 대기 상태를 뜻하는 코드
int8 STATE_MOVING = 1   # 상수 : 이동 중을 뜻하는 코드
int8 STATE_ERROR = 2    # 상수 : 오류 상태를 뜻하는 코드
int8 current_state      # 필드 : 지금 상태 (위 코드 중 하나가 담김)
sensor_msgs/BatteryState battery_state