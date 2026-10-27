import numpy as np
from std_msgs.msg import Header
from sensor_msgs_py import point_cloud2

pts = np.array([[0.1, 0.2, 0.3], [1.0, 2.0, 3.0], [4.0, 5.0, 6.0]], dtype=np.float32)
msg = point_cloud2.create_cloud_xyz32(Header(frame_id='map'), pts)
print('height', msg.height, 'width', msg.width)
print('point_step', msg.point_step, 'row_step', msg.row_step, 'data', len(msg.data))

for f in msg.fields:
    print(f.name, 'offset', f.offset)
# 풀기 하나 — read_points: 이름표 붙은 1차원 배열
pts = point_cloud2.read_points(msg, field_names=('x', 'y', 'z'), skip_nans=True)
print('read_points', pts.dtype, pts.shape)
print('pts[0][0] =', pts[0][0], '| pts["x"] =', pts['x'])

# 풀기 둘 — read_points_numpy: 평범한 (N,3) 배열
from sensor_msgs_py.point_cloud2 import read_points_numpy

xyz = read_points_numpy(msg, field_names=['x', 'y', 'z'], skip_nans=True)
print('read_points_numpy', xyz.dtype, xyz.shape, '| x 열 =', xyz[:, 0])

# 일부러 막히는 줄 — (N,3) 인 줄 알고 쓴 줄. 여기서 멈춘다
print(pts[:, 0])