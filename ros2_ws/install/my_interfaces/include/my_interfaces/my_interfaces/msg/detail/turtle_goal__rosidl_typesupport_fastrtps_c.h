// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice
#ifndef MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces/msg/detail/turtle_goal__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
bool cdr_serialize_my_interfaces__msg__TurtleGoal(
  const my_interfaces__msg__TurtleGoal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
bool cdr_deserialize_my_interfaces__msg__TurtleGoal(
  eprosima::fastcdr::Cdr &,
  my_interfaces__msg__TurtleGoal * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_my_interfaces__msg__TurtleGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_my_interfaces__msg__TurtleGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
bool cdr_serialize_key_my_interfaces__msg__TurtleGoal(
  const my_interfaces__msg__TurtleGoal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t get_serialized_size_key_my_interfaces__msg__TurtleGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
size_t max_serialized_size_key_my_interfaces__msg__TurtleGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces, msg, TurtleGoal)();

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
