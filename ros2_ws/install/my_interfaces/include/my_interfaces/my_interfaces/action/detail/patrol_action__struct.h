// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:action/PatrolAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/action/patrol_action.h"


#ifndef MY_INTERFACES__ACTION__DETAIL__PATROL_ACTION__STRUCT_H_
#define MY_INTERFACES__ACTION__DETAIL__PATROL_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zone'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_Goal
{
  /// Goal : 순찰 영역
  rosidl_runtime_c__String zone;
} my_interfaces__action__PatrolAction_Goal;

// Struct for a sequence of my_interfaces__action__PatrolAction_Goal.
typedef struct my_interfaces__action__PatrolAction_Goal__Sequence
{
  my_interfaces__action__PatrolAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'zone'
// Member 'report'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_Result
{
  bool is_issue;
  rosidl_runtime_c__String zone;
  rosidl_runtime_c__String report;
} my_interfaces__action__PatrolAction_Result;

// Struct for a sequence of my_interfaces__action__PatrolAction_Result.
typedef struct my_interfaces__action__PatrolAction_Result__Sequence
{
  my_interfaces__action__PatrolAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'zone'
// Member 'report'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_Feedback
{
  rosidl_runtime_c__String zone;
  bool is_issue;
  rosidl_runtime_c__String report;
} my_interfaces__action__PatrolAction_Feedback;

// Struct for a sequence of my_interfaces__action__PatrolAction_Feedback.
typedef struct my_interfaces__action__PatrolAction_Feedback__Sequence
{
  my_interfaces__action__PatrolAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_interfaces/action/detail/patrol_action__struct.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_interfaces__action__PatrolAction_Goal goal;
} my_interfaces__action__PatrolAction_SendGoal_Request;

// Struct for a sequence of my_interfaces__action__PatrolAction_SendGoal_Request.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Request__Sequence
{
  my_interfaces__action__PatrolAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_interfaces__action__PatrolAction_SendGoal_Response;

// Struct for a sequence of my_interfaces__action__PatrolAction_SendGoal_Response.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Response__Sequence
{
  my_interfaces__action__PatrolAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__action__PatrolAction_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__action__PatrolAction_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__action__PatrolAction_SendGoal_Request__Sequence request;
  my_interfaces__action__PatrolAction_SendGoal_Response__Sequence response;
} my_interfaces__action__PatrolAction_SendGoal_Event;

// Struct for a sequence of my_interfaces__action__PatrolAction_SendGoal_Event.
typedef struct my_interfaces__action__PatrolAction_SendGoal_Event__Sequence
{
  my_interfaces__action__PatrolAction_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_interfaces__action__PatrolAction_GetResult_Request;

// Struct for a sequence of my_interfaces__action__PatrolAction_GetResult_Request.
typedef struct my_interfaces__action__PatrolAction_GetResult_Request__Sequence
{
  my_interfaces__action__PatrolAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_interfaces/action/detail/patrol_action__struct.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_GetResult_Response
{
  int8_t status;
  my_interfaces__action__PatrolAction_Result result;
} my_interfaces__action__PatrolAction_GetResult_Response;

// Struct for a sequence of my_interfaces__action__PatrolAction_GetResult_Response.
typedef struct my_interfaces__action__PatrolAction_GetResult_Response__Sequence
{
  my_interfaces__action__PatrolAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__action__PatrolAction_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__action__PatrolAction_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__action__PatrolAction_GetResult_Request__Sequence request;
  my_interfaces__action__PatrolAction_GetResult_Response__Sequence response;
} my_interfaces__action__PatrolAction_GetResult_Event;

// Struct for a sequence of my_interfaces__action__PatrolAction_GetResult_Event.
typedef struct my_interfaces__action__PatrolAction_GetResult_Event__Sequence
{
  my_interfaces__action__PatrolAction_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_interfaces/action/detail/patrol_action__struct.h"

/// Struct defined in action/PatrolAction in the package my_interfaces.
typedef struct my_interfaces__action__PatrolAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_interfaces__action__PatrolAction_Feedback feedback;
} my_interfaces__action__PatrolAction_FeedbackMessage;

// Struct for a sequence of my_interfaces__action__PatrolAction_FeedbackMessage.
typedef struct my_interfaces__action__PatrolAction_FeedbackMessage__Sequence
{
  my_interfaces__action__PatrolAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__action__PatrolAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__ACTION__DETAIL__PATROL_ACTION__STRUCT_H_
