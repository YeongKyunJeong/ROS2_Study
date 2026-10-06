// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:srv/SetTurtleName.idl
// generated code does not contain a copyright notice

#include "my_interfaces/srv/detail/set_turtle_name__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__SetTurtleName__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x44, 0x2d, 0x53, 0x49, 0xa1, 0xe7, 0x91,
      0x29, 0x6a, 0xcd, 0x64, 0x1f, 0xdb, 0xf8, 0xfc,
      0xec, 0x55, 0x87, 0xee, 0xe1, 0xe8, 0x3e, 0x9e,
      0xff, 0x73, 0xf9, 0x62, 0xe8, 0x00, 0xca, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__SetTurtleName_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xe7, 0x87, 0x02, 0xd6, 0x9f, 0x1f, 0xf3,
      0x61, 0x48, 0x7f, 0x1a, 0xb2, 0xb0, 0x41, 0xa4,
      0x2c, 0xcb, 0x36, 0x0f, 0x06, 0xa4, 0xec, 0xaa,
      0x3c, 0x1a, 0xde, 0xc3, 0x6b, 0x01, 0x54, 0xfd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__SetTurtleName_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x2c, 0x15, 0xf7, 0xde, 0xa1, 0x5a, 0xe2,
      0x30, 0xa1, 0xb3, 0x80, 0xd4, 0x8e, 0xef, 0xbe,
      0x7c, 0x1c, 0xd0, 0x4f, 0xa8, 0x33, 0x87, 0xaf,
      0xc8, 0x5a, 0xa1, 0xe3, 0x18, 0x90, 0x6f, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__SetTurtleName_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x16, 0xd8, 0x92, 0x58, 0x51, 0x0a, 0xd8,
      0x60, 0x0f, 0x8d, 0x83, 0xc0, 0xe3, 0xa4, 0x58,
      0x5d, 0xd7, 0x8f, 0x5f, 0xe8, 0x48, 0x89, 0x37,
      0xa5, 0x04, 0x9c, 0x94, 0x0b, 0x9e, 0x33, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_interfaces__srv__SetTurtleName__TYPE_NAME[] = "my_interfaces/srv/SetTurtleName";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_interfaces__srv__SetTurtleName_Event__TYPE_NAME[] = "my_interfaces/srv/SetTurtleName_Event";
static char my_interfaces__srv__SetTurtleName_Request__TYPE_NAME[] = "my_interfaces/srv/SetTurtleName_Request";
static char my_interfaces__srv__SetTurtleName_Response__TYPE_NAME[] = "my_interfaces/srv/SetTurtleName_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_interfaces__srv__SetTurtleName__FIELD_NAME__request_message[] = "request_message";
static char my_interfaces__srv__SetTurtleName__FIELD_NAME__response_message[] = "response_message";
static char my_interfaces__srv__SetTurtleName__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__SetTurtleName__FIELDS[] = {
  {
    {my_interfaces__srv__SetTurtleName__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__SetTurtleName_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__SetTurtleName__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__SetTurtleName__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__SetTurtleName__TYPE_NAME, 31, 31},
      {my_interfaces__srv__SetTurtleName__FIELDS, 3, 3},
    },
    {my_interfaces__srv__SetTurtleName__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__SetTurtleName_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__SetTurtleName_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_interfaces__srv__SetTurtleName_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__SetTurtleName_Request__FIELD_NAME__new_name[] = "new_name";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__SetTurtleName_Request__FIELDS[] = {
  {
    {my_interfaces__srv__SetTurtleName_Request__FIELD_NAME__new_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__SetTurtleName_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
      {my_interfaces__srv__SetTurtleName_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__SetTurtleName_Response__FIELD_NAME__success[] = "success";
static char my_interfaces__srv__SetTurtleName_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__SetTurtleName_Response__FIELDS[] = {
  {
    {my_interfaces__srv__SetTurtleName_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__SetTurtleName_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
      {my_interfaces__srv__SetTurtleName_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__info[] = "info";
static char my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__request[] = "request";
static char my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__SetTurtleName_Event__FIELDS[] = {
  {
    {my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__SetTurtleName_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__SetTurtleName_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__SetTurtleName_Event__TYPE_NAME, 37, 37},
      {my_interfaces__srv__SetTurtleName_Event__FIELDS, 3, 3},
    },
    {my_interfaces__srv__SetTurtleName_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__SetTurtleName_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__SetTurtleName_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# my_interfaces/srv/SetTurtleName.srv\n"
  "\n"
  "string new_name     # \\xec\\x83\\x88\\xeb\\xa1\\x9c \\xeb\\xb6\\x99\\xec\\x9d\\xbc \\xec\\x9d\\xb4\\xeb\\xa6\\x84\n"
  "---\n"
  "bool success        # \\xec\\x9d\\x91\\xeb\\x8b\\xb5 : \\xec\\x84\\xb1\\xea\\xb3\\xb5 \\xec\\x97\\xac\\xeb\\xb6\\x80\n"
  "string message      # \\xec\\x9d\\x91\\xeb\\x8b\\xb5 : \\xec\\x82\\xac\\xeb\\x9e\\x8c\\xec\\x9d\\xb4 \\xec\\x9d\\xbd\\xec\\x9d\\x84 \\xec\\x95\\x88\\xeb\\x82\\xb4\\xeb\\xac\\xb8";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__SetTurtleName__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__SetTurtleName__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__SetTurtleName_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__SetTurtleName_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__SetTurtleName_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__SetTurtleName_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__SetTurtleName_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__SetTurtleName_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__SetTurtleName__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__SetTurtleName__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__SetTurtleName_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__SetTurtleName_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_interfaces__srv__SetTurtleName_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__SetTurtleName_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__SetTurtleName_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__SetTurtleName_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__SetTurtleName_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__SetTurtleName_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__SetTurtleName_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__SetTurtleName_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__SetTurtleName_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
