// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/robot_state.h"


#ifndef MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATE_IDLE'.
/**
  * 상수 : 대기 상태를 뜻하는 코드
 */
enum
{
  my_interfaces__msg__RobotState__STATE_IDLE = 0
};

/// Constant 'STATE_MOVING'.
/**
  * 상수 : 이동 중을 뜻하는 코드
 */
enum
{
  my_interfaces__msg__RobotState__STATE_MOVING = 1
};

/// Constant 'STATE_ERROR'.
/**
  * 상수 : 오류 상태를 뜻하는 코드
 */
enum
{
  my_interfaces__msg__RobotState__STATE_ERROR = 2
};

// Include directives for member types
// Member 'battery_state'
#include "sensor_msgs/msg/detail/battery_state__struct.h"

/// Struct defined in msg/RobotState in the package my_interfaces.
/**
  * my_interfaces/msg/RobotState.msg
 */
typedef struct my_interfaces__msg__RobotState
{
  /// 필드 : 지금 상태 (위 코드 중 하나가 담김)
  int8_t current_state;
  sensor_msgs__msg__BatteryState battery_state;
} my_interfaces__msg__RobotState;

// Struct for a sequence of my_interfaces__msg__RobotState.
typedef struct my_interfaces__msg__RobotState__Sequence
{
  my_interfaces__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
