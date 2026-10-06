// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interface/msg/mission.hpp"


#ifndef MISSION_INTERFACE__MSG__DETAIL__MISSION__BUILDER_HPP_
#define MISSION_INTERFACE__MSG__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_interface/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_interface
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_interface::msg::Mission>()
{
  return ::mission_interface::msg::Mission(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mission_interface

#endif  // MISSION_INTERFACE__MSG__DETAIL__MISSION__BUILDER_HPP_
