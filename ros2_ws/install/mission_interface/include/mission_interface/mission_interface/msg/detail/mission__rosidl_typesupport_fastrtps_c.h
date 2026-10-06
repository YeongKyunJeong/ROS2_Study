// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice
#ifndef MISSION_INTERFACE__MSG__DETAIL__MISSION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MISSION_INTERFACE__MSG__DETAIL__MISSION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mission_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mission_interface/msg/detail/mission__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
bool cdr_serialize_mission_interface__msg__Mission(
  const mission_interface__msg__Mission * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
bool cdr_deserialize_mission_interface__msg__Mission(
  eprosima::fastcdr::Cdr &,
  mission_interface__msg__Mission * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
size_t get_serialized_size_mission_interface__msg__Mission(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
size_t max_serialized_size_mission_interface__msg__Mission(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
bool cdr_serialize_key_mission_interface__msg__Mission(
  const mission_interface__msg__Mission * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
size_t get_serialized_size_key_mission_interface__msg__Mission(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
size_t max_serialized_size_key_mission_interface__msg__Mission(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interface, msg, Mission)();

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACE__MSG__DETAIL__MISSION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
