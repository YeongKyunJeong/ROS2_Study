// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/robot_state.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'battery_state'
#include "sensor_msgs/msg/detail/battery_state__traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_state
  {
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: battery_state
  {
    out << "battery_state: ";
    to_flow_style_yaml(msg.battery_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << "\n";
  }

  // member: battery_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_state:\n";
    to_block_style_yaml(msg.battery_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::RobotState & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::RobotState>()
{
  return "my_interfaces::msg::RobotState";
}

template<>
inline const char * name<my_interfaces::msg::RobotState>()
{
  return "my_interfaces/msg/RobotState";
}

template<>
struct has_fixed_size<my_interfaces::msg::RobotState>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::BatteryState>::value> {};

template<>
struct has_bounded_size<my_interfaces::msg::RobotState>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::BatteryState>::value> {};

template<>
struct is_message<my_interfaces::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
