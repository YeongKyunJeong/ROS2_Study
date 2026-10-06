# my_interfaces/msg/TurtleGoal.msg

# 파일 제목은 파스칼 케이스로(첫 글자 대문자)
# 타입 이름 
# 변수명은 스네이크 케이스로
string turtle_name              # 거북이 이름
# float64 x                       # 목표의 x 좌표
# float64 y                       # 목표의 y 좌표
geometry_msgs/Point goal_point  # ← 표준 좌표 타입을 칸으로
float64 speed                   # 이동 속도