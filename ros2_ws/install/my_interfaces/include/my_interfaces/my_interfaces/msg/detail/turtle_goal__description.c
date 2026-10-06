// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/turtle_goal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__TurtleGoal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x3d, 0x29, 0x9a, 0xb5, 0x92, 0x93, 0x24,
      0xe7, 0x69, 0xa9, 0x1b, 0xd1, 0x0b, 0x2c, 0x52,
      0x12, 0xbf, 0xa1, 0x1e, 0x6f, 0xba, 0x52, 0xaf,
      0xb6, 0xc2, 0xc9, 0x4b, 0x77, 0x4f, 0x63, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char my_interfaces__msg__TurtleGoal__TYPE_NAME[] = "my_interfaces/msg/TurtleGoal";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char my_interfaces__msg__TurtleGoal__FIELD_NAME__turtle_name[] = "turtle_name";
static char my_interfaces__msg__TurtleGoal__FIELD_NAME__goal_point[] = "goal_point";
static char my_interfaces__msg__TurtleGoal__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__TurtleGoal__FIELDS[] = {
  {
    {my_interfaces__msg__TurtleGoal__FIELD_NAME__turtle_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__TurtleGoal__FIELD_NAME__goal_point, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__TurtleGoal__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__msg__TurtleGoal__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__TurtleGoal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__TurtleGoal__TYPE_NAME, 28, 28},
      {my_interfaces__msg__TurtleGoal__FIELDS, 3, 3},
    },
    {my_interfaces__msg__TurtleGoal__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# my_interfaces/msg/TurtleGoal.msg\n"
  "\n"
  "# \\xed\\x8c\\x8c\\xec\\x9d\\xbc \\xec\\xa0\\x9c\\xeb\\xaa\\xa9\\xec\\x9d\\x80 \\xed\\x8c\\x8c\\xec\\x8a\\xa4\\xec\\xb9\\xbc \\xec\\xbc\\x80\\xec\\x9d\\xb4\\xec\\x8a\\xa4\\xeb\\xa1\\x9c(\\xec\\xb2\\xab \\xea\\xb8\\x80\\xec\\x9e\\x90 \\xeb\\x8c\\x80\\xeb\\xac\\xb8\\xec\\x9e\\x90)\n"
  "# \\xed\\x83\\x80\\xec\\x9e\\x85 \\xec\\x9d\\xb4\\xeb\\xa6\\x84 \n"
  "# \\xeb\\xb3\\x80\\xec\\x88\\x98\\xeb\\xaa\\x85\\xec\\x9d\\x80 \\xec\\x8a\\xa4\\xeb\\x84\\xa4\\xec\\x9d\\xb4\\xed\\x81\\xac \\xec\\xbc\\x80\\xec\\x9d\\xb4\\xec\\x8a\\xa4\\xeb\\xa1\\x9c\n"
  "string turtle_name              # \\xea\\xb1\\xb0\\xeb\\xb6\\x81\\xec\\x9d\\xb4 \\xec\\x9d\\xb4\\xeb\\xa6\\x84\n"
  "# float64 x                       # \\xeb\\xaa\\xa9\\xed\\x91\\x9c\\xec\\x9d\\x98 x \\xec\\xa2\\x8c\\xed\\x91\\x9c\n"
  "# float64 y                       # \\xeb\\xaa\\xa9\\xed\\x91\\x9c\\xec\\x9d\\x98 y \\xec\\xa2\\x8c\\xed\\x91\\x9c\n"
  "geometry_msgs/Point goal_point  # \\xe2\\x86\\x90 \\xed\\x91\\x9c\\xec\\xa4\\x80 \\xec\\xa2\\x8c\\xed\\x91\\x9c \\xed\\x83\\x80\\xec\\x9e\\x85\\xec\\x9d\\x84 \\xec\\xb9\\xb8\\xec\\x9c\\xbc\\xeb\\xa1\\x9c\n"
  "float64 speed                   # \\xec\\x9d\\xb4\\xeb\\x8f\\x99 \\xec\\x86\\x8d\\xeb\\x8f\\x84";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__TurtleGoal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__TurtleGoal__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 310, 310},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__TurtleGoal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__TurtleGoal__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
