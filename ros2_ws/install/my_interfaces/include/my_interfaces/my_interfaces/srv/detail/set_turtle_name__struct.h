// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/SetTurtleName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/set_turtle_name.h"


#ifndef MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'new_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTurtleName in the package my_interfaces.
typedef struct my_interfaces__srv__SetTurtleName_Request
{
  /// 새로 붙일 이름
  rosidl_runtime_c__String new_name;
} my_interfaces__srv__SetTurtleName_Request;

// Struct for a sequence of my_interfaces__srv__SetTurtleName_Request.
typedef struct my_interfaces__srv__SetTurtleName_Request__Sequence
{
  my_interfaces__srv__SetTurtleName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetTurtleName_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTurtleName in the package my_interfaces.
typedef struct my_interfaces__srv__SetTurtleName_Response
{
  /// 응답 : 성공 여부
  bool success;
  /// 응답 : 사람이 읽을 안내문
  rosidl_runtime_c__String message;
} my_interfaces__srv__SetTurtleName_Response;

// Struct for a sequence of my_interfaces__srv__SetTurtleName_Response.
typedef struct my_interfaces__srv__SetTurtleName_Response__Sequence
{
  my_interfaces__srv__SetTurtleName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetTurtleName_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__srv__SetTurtleName_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__srv__SetTurtleName_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTurtleName in the package my_interfaces.
typedef struct my_interfaces__srv__SetTurtleName_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__srv__SetTurtleName_Request__Sequence request;
  my_interfaces__srv__SetTurtleName_Response__Sequence response;
} my_interfaces__srv__SetTurtleName_Event;

// Struct for a sequence of my_interfaces__srv__SetTurtleName_Event.
typedef struct my_interfaces__srv__SetTurtleName_Event__Sequence
{
  my_interfaces__srv__SetTurtleName_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetTurtleName_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__STRUCT_H_
