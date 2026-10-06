// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/turtle_goal.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/turtle_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleGoal_speed
{
public:
  explicit Init_TurtleGoal_speed(::my_interfaces::msg::TurtleGoal & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::TurtleGoal speed(::my_interfaces::msg::TurtleGoal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::TurtleGoal msg_;
};

class Init_TurtleGoal_goal_point
{
public:
  explicit Init_TurtleGoal_goal_point(::my_interfaces::msg::TurtleGoal & msg)
  : msg_(msg)
  {}
  Init_TurtleGoal_speed goal_point(::my_interfaces::msg::TurtleGoal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return Init_TurtleGoal_speed(msg_);
  }

private:
  ::my_interfaces::msg::TurtleGoal msg_;
};

class Init_TurtleGoal_turtle_name
{
public:
  Init_TurtleGoal_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleGoal_goal_point turtle_name(::my_interfaces::msg::TurtleGoal::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return Init_TurtleGoal_goal_point(msg_);
  }

private:
  ::my_interfaces::msg::TurtleGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::TurtleGoal>()
{
  return my_interfaces::msg::builder::Init_TurtleGoal_turtle_name();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__BUILDER_HPP_
