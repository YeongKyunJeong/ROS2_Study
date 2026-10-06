// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interface/msg/mission.hpp"


#ifndef MISSION_INTERFACE__MSG__DETAIL__MISSION__TRAITS_HPP_
#define MISSION_INTERFACE__MSG__DETAIL__MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mission_interface/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mission_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mission & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mission_interface

namespace rosidl_generator_traits
{

[[deprecated("use mission_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mission_interface::msg::Mission & msg,
  std::ostream & out, size_t indentation = 0)
{
  mission_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mission_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const mission_interface::msg::Mission & msg)
{
  return mission_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mission_interface::msg::Mission>()
{
  return "mission_interface::msg::Mission";
}

template<>
inline const char * name<mission_interface::msg::Mission>()
{
  return "mission_interface/msg/Mission";
}

template<>
struct has_fixed_size<mission_interface::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mission_interface::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mission_interface::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MISSION_INTERFACE__MSG__DETAIL__MISSION__TRAITS_HPP_
