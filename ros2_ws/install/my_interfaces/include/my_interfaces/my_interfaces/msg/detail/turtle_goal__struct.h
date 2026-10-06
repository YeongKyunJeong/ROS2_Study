// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/turtle_goal.h"


#ifndef MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'turtle_name'
#include "rosidl_runtime_c/string.h"
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/TurtleGoal in the package my_interfaces.
/**
  * my_interfaces/msg/TurtleGoal.msg
 */
typedef struct my_interfaces__msg__TurtleGoal
{
  /// 파일 제목은 파스칼 케이스로(첫 글자 대문자)
  /// 타입 이름
  /// 변수명은 스네이크 케이스로
  /// 거북이 이름
  rosidl_runtime_c__String turtle_name;
  /// float64 x                       # 목표의 x 좌표
  /// float64 y                       # 목표의 y 좌표
  /// ← 표준 좌표 타입을 칸으로
  geometry_msgs__msg__Point goal_point;
  /// 이동 속도
  double speed;
} my_interfaces__msg__TurtleGoal;

// Struct for a sequence of my_interfaces__msg__TurtleGoal.
typedef struct my_interfaces__msg__TurtleGoal__Sequence
{
  my_interfaces__msg__TurtleGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__TurtleGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_H_
