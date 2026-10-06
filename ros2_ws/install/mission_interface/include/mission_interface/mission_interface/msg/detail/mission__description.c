// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

#include "mission_interface/msg/detail/mission__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mission_interface
const rosidl_type_hash_t *
mission_interface__msg__Mission__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x07, 0xf0, 0xfe, 0x96, 0x1a, 0x52, 0x61,
      0xa5, 0xb5, 0xbc, 0x4f, 0x82, 0x35, 0x8e, 0x32,
      0x51, 0x67, 0xba, 0x8b, 0xdd, 0x2e, 0x60, 0x54,
      0xee, 0x01, 0xcb, 0xbc, 0x29, 0x11, 0x32, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mission_interface__msg__Mission__TYPE_NAME[] = "mission_interface/msg/Mission";

// Define type names, field names, and default values
static char mission_interface__msg__Mission__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mission_interface__msg__Mission__FIELDS[] = {
  {
    {mission_interface__msg__Mission__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mission_interface__msg__Mission__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mission_interface__msg__Mission__TYPE_NAME, 29, 29},
      {mission_interface__msg__Mission__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# mission_interface/Mission.msg\n"
  "\n"
  "int64 MISSION_WORKING_STATE = 0     # \\xec\\xa7\\x84\\xed\\x96\\x89 \\xec\\x83\\x81\\xed\\x83\\x9c \\xec\\xbd\\x94\\xeb\\x93\\x9c\n"
  "int64 MISSION_SUCCESS_STATE = 1     # \\xec\\x84\\xb1\\xea\\xb3\\xb5 \\xec\\x83\\x81\\xed\\x83\\x9c \\xec\\xbd\\x94\\xeb\\x93\\x9c\n"
  "int64 MISSION_FAIL_STATE = 2     # \\xec\\x8b\\xa4\\xed\\x8c\\xa8 \\xec\\x83\\x81\\xed\\x83\\x9c \\xec\\xbd\\x94\\xeb\\x93\\x9c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mission_interface__msg__Mission__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mission_interface__msg__Mission__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interface__msg__Mission__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mission_interface__msg__Mission__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
