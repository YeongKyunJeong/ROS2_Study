// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/ArithmeticArguments.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/arithmetic_arguments.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/arithmetic_arguments__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArithmeticArguments_argument_b
{
public:
  explicit Init_ArithmeticArguments_argument_b(::my_interfaces::msg::ArithmeticArguments & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::ArithmeticArguments argument_b(::my_interfaces::msg::ArithmeticArguments::_argument_b_type arg)
  {
    msg_.argument_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::ArithmeticArguments msg_;
};

class Init_ArithmeticArguments_argument_a
{
public:
  Init_ArithmeticArguments_argument_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticArguments_argument_b argument_a(::my_interfaces::msg::ArithmeticArguments::_argument_a_type arg)
  {
    msg_.argument_a = std::move(arg);
    return Init_ArithmeticArguments_argument_b(msg_);
  }

private:
  ::my_interfaces::msg::ArithmeticArguments msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::ArithmeticArguments>()
{
  return my_interfaces::msg::builder::Init_ArithmeticArguments_argument_a();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__BUILDER_HPP_
