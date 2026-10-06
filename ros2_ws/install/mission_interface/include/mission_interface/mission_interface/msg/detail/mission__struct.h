// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interface/msg/mission.h"


#ifndef MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_H_
#define MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MISSION_WORKING_STATE'.
/**
  * 진행 상태 코드
 */
enum
{
  mission_interface__msg__Mission__MISSION_WORKING_STATE = 0ll
};

/// Constant 'MISSION_SUCCESS_STATE'.
/**
  * 성공 상태 코드
 */
enum
{
  mission_interface__msg__Mission__MISSION_SUCCESS_STATE = 1ll
};

/// Constant 'MISSION_FAIL_STATE'.
/**
  * 실패 상태 코드
 */
enum
{
  mission_interface__msg__Mission__MISSION_FAIL_STATE = 2ll
};

/// Struct defined in msg/Mission in the package mission_interface.
/**
  * mission_interface/Mission.msg
 */
typedef struct mission_interface__msg__Mission
{
  uint8_t structure_needs_at_least_one_member;
} mission_interface__msg__Mission;

// Struct for a sequence of mission_interface__msg__Mission.
typedef struct mission_interface__msg__Mission__Sequence
{
  mission_interface__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interface__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_H_
