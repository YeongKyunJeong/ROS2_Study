// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/turtle_goal.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/turtle_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_name
  {
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << ", ";
  }

  // member: goal_point
  {
    out << "goal_point: ";
    to_flow_style_yaml(msg.goal_point, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << "\n";
  }

  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_block_style_yaml(msg.goal_point, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleGoal & msg, bool use_flow_style = false)
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
  const my_interfaces::msg::TurtleGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::TurtleGoal & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::TurtleGoal>()
{
  return "my_interfaces::msg::TurtleGoal";
}

template<>
inline const char * name<my_interfaces::msg::TurtleGoal>()
{
  return "my_interfaces/msg/TurtleGoal";
}

template<>
struct has_fixed_size<my_interfaces::msg::TurtleGoal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::TurtleGoal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::TurtleGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__TRAITS_HPP_
