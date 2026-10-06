// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/robot_state.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotState_battery_state
{
public:
  explicit Init_RobotState_battery_state(::my_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::RobotState battery_state(::my_interfaces::msg::RobotState::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::RobotState msg_;
};

class Init_RobotState_current_state
{
public:
  Init_RobotState_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_battery_state current_state(::my_interfaces::msg::RobotState::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_RobotState_battery_state(msg_);
  }

private:
  ::my_interfaces::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::RobotState>()
{
  return my_interfaces::msg::builder::Init_RobotState_current_state();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
