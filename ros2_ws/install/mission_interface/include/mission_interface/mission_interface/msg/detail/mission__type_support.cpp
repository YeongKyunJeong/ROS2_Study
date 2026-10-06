// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mission_interface/msg/detail/mission__functions.h"
#include "mission_interface/msg/detail/mission__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mission_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Mission_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mission_interface::msg::Mission(_init);
}

void Mission_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mission_interface::msg::Mission *>(message_memory);
  typed_message->~Mission();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Mission_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interface::msg::Mission, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Mission_message_members = {
  "mission_interface::msg",  // message namespace
  "Mission",  // message name
  1,  // number of fields
  sizeof(mission_interface::msg::Mission),
  false,  // has_any_key_member_
  Mission_message_member_array,  // message members
  Mission_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Mission_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Mission_message_members,
  get_message_typesupport_handle_function,
  &mission_interface__msg__Mission__get_type_hash,
  &mission_interface__msg__Mission__get_type_description,
  &mission_interface__msg__Mission__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mission_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interface::msg::Mission>()
{
  return &::mission_interface::msg::rosidl_typesupport_introspection_cpp::Mission_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interface, msg, Mission)() {
  return &::mission_interface::msg::rosidl_typesupport_introspection_cpp::Mission_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
