// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/arithmetic_operator.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Request_arithmetic_operator
{
public:
  Init_ArithmeticOperator_Request_arithmetic_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::ArithmeticOperator_Request arithmetic_operator(::my_interfaces::srv::ArithmeticOperator_Request::_arithmetic_operator_type arg)
  {
    msg_.arithmetic_operator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::ArithmeticOperator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::ArithmeticOperator_Request>()
{
  return my_interfaces::srv::builder::Init_ArithmeticOperator_Request_arithmetic_operator();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Response_arithmetic_result
{
public:
  Init_ArithmeticOperator_Response_arithmetic_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::ArithmeticOperator_Response arithmetic_result(::my_interfaces::srv::ArithmeticOperator_Response::_arithmetic_result_type arg)
  {
    msg_.arithmetic_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::ArithmeticOperator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::ArithmeticOperator_Response>()
{
  return my_interfaces::srv::builder::Init_ArithmeticOperator_Response_arithmetic_result();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Event_response
{
public:
  explicit Init_ArithmeticOperator_Event_response(::my_interfaces::srv::ArithmeticOperator_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::ArithmeticOperator_Event response(::my_interfaces::srv::ArithmeticOperator_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::ArithmeticOperator_Event msg_;
};

class Init_ArithmeticOperator_Event_request
{
public:
  explicit Init_ArithmeticOperator_Event_request(::my_interfaces::srv::ArithmeticOperator_Event & msg)
  : msg_(msg)
  {}
  Init_ArithmeticOperator_Event_response request(::my_interfaces::srv::ArithmeticOperator_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ArithmeticOperator_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::ArithmeticOperator_Event msg_;
};

class Init_ArithmeticOperator_Event_info
{
public:
  Init_ArithmeticOperator_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticOperator_Event_request info(::my_interfaces::srv::ArithmeticOperator_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ArithmeticOperator_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::ArithmeticOperator_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::ArithmeticOperator_Event>()
{
  return my_interfaces::srv::builder::Init_ArithmeticOperator_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
