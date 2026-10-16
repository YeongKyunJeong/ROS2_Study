// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/robot_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__RobotState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x00, 0x75, 0xf8, 0x2d, 0xd2, 0x18, 0xce,
      0x1d, 0xef, 0xcd, 0xaa, 0x43, 0xf3, 0xec, 0x9e,
      0x5f, 0x24, 0xd0, 0x11, 0x9a, 0xf9, 0xa3, 0xca,
      0x3d, 0x1c, 0xc0, 0x0f, 0x99, 0xad, 0xae, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "sensor_msgs/msg/detail/battery_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__BatteryState__EXPECTED_HASH = {1, {
    0x4b, 0xee, 0x5d, 0xfc, 0xe9, 0x81, 0xc9, 0x8f,
    0xaa, 0x68, 0x28, 0xb8, 0x68, 0x30, 0x7a, 0x0a,
    0x73, 0xf9, 0x92, 0xed, 0x07, 0x89, 0xf3, 0x74,
    0xee, 0x96, 0xc8, 0xf8, 0x40, 0xe6, 0x97, 0x41,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char my_interfaces__msg__RobotState__TYPE_NAME[] = "my_interfaces/msg/RobotState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__BatteryState__TYPE_NAME[] = "sensor_msgs/msg/BatteryState";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char my_interfaces__msg__RobotState__FIELD_NAME__current_state[] = "current_state";
static char my_interfaces__msg__RobotState__FIELD_NAME__battery_state[] = "battery_state";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__RobotState__FIELDS[] = {
  {
    {my_interfaces__msg__RobotState__FIELD_NAME__current_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__RobotState__FIELD_NAME__battery_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__BatteryState__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__msg__RobotState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__BatteryState__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__RobotState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__RobotState__TYPE_NAME, 28, 28},
      {my_interfaces__msg__RobotState__FIELDS, 2, 2},
    },
    {my_interfaces__msg__RobotState__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__BatteryState__EXPECTED_HASH, sensor_msgs__msg__BatteryState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__BatteryState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# my_interfaces/msg/RobotState.msg\n"
  "\n"
  "int8 STATE_IDLE = 0     # \\xec\\x83\\x81\\xec\\x88\\x98 : \\xeb\\x8c\\x80\\xea\\xb8\\xb0 \\xec\\x83\\x81\\xed\\x83\\x9c\\xeb\\xa5\\xbc \\xeb\\x9c\\xbb\\xed\\x95\\x98\\xeb\\x8a\\x94 \\xec\\xbd\\x94\\xeb\\x93\\x9c\n"
  "int8 STATE_MOVING = 1   # \\xec\\x83\\x81\\xec\\x88\\x98 : \\xec\\x9d\\xb4\\xeb\\x8f\\x99 \\xec\\xa4\\x91\\xec\\x9d\\x84 \\xeb\\x9c\\xbb\\xed\\x95\\x98\\xeb\\x8a\\x94 \\xec\\xbd\\x94\\xeb\\x93\\x9c\n"
  "int8 STATE_ERROR = 2    # \\xec\\x83\\x81\\xec\\x88\\x98 : \\xec\\x98\\xa4\\xeb\\xa5\\x98 \\xec\\x83\\x81\\xed\\x83\\x9c\\xeb\\xa5\\xbc \\xeb\\x9c\\xbb\\xed\\x95\\x98\\xeb\\x8a\\x94 \\xec\\xbd\\x94\\xeb\\x93\\x9c\n"
  "int8 current_state      # \\xed\\x95\\x84\\xeb\\x93\\x9c : \\xec\\xa7\\x80\\xea\\xb8\\x88 \\xec\\x83\\x81\\xed\\x83\\x9c (\\xec\\x9c\\x84 \\xec\\xbd\\x94\\xeb\\x93\\x9c \\xec\\xa4\\x91 \\xed\\x95\\x98\\xeb\\x82\\x98\\xea\\xb0\\x80 \\xeb\\x8b\\xb4\\xea\\xb9\\x80)\n"
  "sensor_msgs/BatteryState battery_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__RobotState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__RobotState__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 261, 261},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__RobotState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__RobotState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__BatteryState__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
