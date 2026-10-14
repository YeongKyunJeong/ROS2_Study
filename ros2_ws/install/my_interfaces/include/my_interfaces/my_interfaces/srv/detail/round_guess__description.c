// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:srv/RoundGuess.idl
// generated code does not contain a copyright notice

#include "my_interfaces/srv/detail/round_guess__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__RoundGuess__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x0a, 0xf8, 0x2e, 0xba, 0xc8, 0x2d, 0x7e,
      0x9c, 0x32, 0xd2, 0x05, 0x2a, 0x0f, 0x43, 0xe2,
      0x9b, 0x09, 0x5c, 0xd8, 0x35, 0x7f, 0x57, 0x81,
      0xb3, 0x28, 0xe2, 0xc7, 0xeb, 0xb6, 0x35, 0xfe,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__RoundGuess_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x05, 0x66, 0x3b, 0x78, 0x20, 0xf0, 0x59,
      0x21, 0x21, 0xdb, 0x27, 0x23, 0x98, 0x98, 0x71,
      0x21, 0xf1, 0xdf, 0x01, 0x6b, 0xff, 0x15, 0x9f,
      0x93, 0x9e, 0xf9, 0xc3, 0xd9, 0x8b, 0xc4, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__RoundGuess_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x65, 0xfd, 0x18, 0x4c, 0x2a, 0x0c, 0x9b,
      0xf9, 0x74, 0x53, 0x59, 0x84, 0x3a, 0x74, 0x2f,
      0xda, 0x42, 0x57, 0x92, 0x5e, 0x73, 0x4b, 0x1a,
      0x70, 0x34, 0x9c, 0x1b, 0xc5, 0x9c, 0xd7, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__RoundGuess_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xa1, 0xa0, 0x7b, 0xec, 0x8f, 0xa9, 0x8a,
      0x7c, 0xa3, 0xb8, 0xa2, 0x8f, 0xf8, 0xe9, 0x93,
      0xc2, 0xff, 0xa8, 0x0e, 0x1a, 0x2e, 0xde, 0x7f,
      0xd2, 0xcd, 0x08, 0x19, 0x98, 0xbd, 0x58, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char my_interfaces__srv__RoundGuess__TYPE_NAME[] = "my_interfaces/srv/RoundGuess";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_interfaces__srv__RoundGuess_Event__TYPE_NAME[] = "my_interfaces/srv/RoundGuess_Event";
static char my_interfaces__srv__RoundGuess_Request__TYPE_NAME[] = "my_interfaces/srv/RoundGuess_Request";
static char my_interfaces__srv__RoundGuess_Response__TYPE_NAME[] = "my_interfaces/srv/RoundGuess_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_interfaces__srv__RoundGuess__FIELD_NAME__request_message[] = "request_message";
static char my_interfaces__srv__RoundGuess__FIELD_NAME__response_message[] = "response_message";
static char my_interfaces__srv__RoundGuess__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__RoundGuess__FIELDS[] = {
  {
    {my_interfaces__srv__RoundGuess__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__RoundGuess_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__RoundGuess__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__RoundGuess__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__RoundGuess__TYPE_NAME, 28, 28},
      {my_interfaces__srv__RoundGuess__FIELDS, 3, 3},
    },
    {my_interfaces__srv__RoundGuess__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__RoundGuess_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__RoundGuess_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_interfaces__srv__RoundGuess_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__RoundGuess_Request__FIELD_NAME__letter[] = "letter";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__RoundGuess_Request__FIELDS[] = {
  {
    {my_interfaces__srv__RoundGuess_Request__FIELD_NAME__letter, 6, 6},
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
my_interfaces__srv__RoundGuess_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
      {my_interfaces__srv__RoundGuess_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__RoundGuess_Response__FIELD_NAME__correct[] = "correct";
static char my_interfaces__srv__RoundGuess_Response__FIELD_NAME__done[] = "done";
static char my_interfaces__srv__RoundGuess_Response__FIELD_NAME__board[] = "board";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__RoundGuess_Response__FIELDS[] = {
  {
    {my_interfaces__srv__RoundGuess_Response__FIELD_NAME__correct, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Response__FIELD_NAME__done, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Response__FIELD_NAME__board, 5, 5},
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
my_interfaces__srv__RoundGuess_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
      {my_interfaces__srv__RoundGuess_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__RoundGuess_Event__FIELD_NAME__info[] = "info";
static char my_interfaces__srv__RoundGuess_Event__FIELD_NAME__request[] = "request";
static char my_interfaces__srv__RoundGuess_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__RoundGuess_Event__FIELDS[] = {
  {
    {my_interfaces__srv__RoundGuess_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__RoundGuess_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__RoundGuess_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__RoundGuess_Event__TYPE_NAME, 34, 34},
      {my_interfaces__srv__RoundGuess_Event__FIELDS, 3, 3},
    },
    {my_interfaces__srv__RoundGuess_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__RoundGuess_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__RoundGuess_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# my_interface/srv/RoundGuess.srv\n"
  "\n"
  "# \\xec\\x98\\x88\\xec\\xb8\\xa1 \\xeb\\xac\\xb8\\xec\\x9e\\x90\n"
  "string letter\n"
  "---\n"
  "bool correct\n"
  "bool done\n"
  "string board";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__RoundGuess__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__RoundGuess__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__RoundGuess_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__RoundGuess_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__RoundGuess_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__RoundGuess_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__RoundGuess_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__RoundGuess_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__RoundGuess__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__RoundGuess__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__RoundGuess_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__RoundGuess_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_interfaces__srv__RoundGuess_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__RoundGuess_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__RoundGuess_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__RoundGuess_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__RoundGuess_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__RoundGuess_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__RoundGuess_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__RoundGuess_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__RoundGuess_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
