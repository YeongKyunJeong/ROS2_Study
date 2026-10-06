// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/SetTurtleName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/set_turtle_name.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/set_turtle_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTurtleName_Request_new_name
{
public:
  Init_SetTurtleName_Request_new_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::SetTurtleName_Request new_name(::my_interfaces::srv::SetTurtleName_Request::_new_name_type arg)
  {
    msg_.new_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetTurtleName_Request>()
{
  return my_interfaces::srv::builder::Init_SetTurtleName_Request_new_name();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTurtleName_Response_message
{
public:
  explicit Init_SetTurtleName_Response_message(::my_interfaces::srv::SetTurtleName_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SetTurtleName_Response message(::my_interfaces::srv::SetTurtleName_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Response msg_;
};

class Init_SetTurtleName_Response_success
{
public:
  Init_SetTurtleName_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTurtleName_Response_message success(::my_interfaces::srv::SetTurtleName_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTurtleName_Response_message(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetTurtleName_Response>()
{
  return my_interfaces::srv::builder::Init_SetTurtleName_Response_success();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTurtleName_Event_response
{
public:
  explicit Init_SetTurtleName_Event_response(::my_interfaces::srv::SetTurtleName_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SetTurtleName_Event response(::my_interfaces::srv::SetTurtleName_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Event msg_;
};

class Init_SetTurtleName_Event_request
{
public:
  explicit Init_SetTurtleName_Event_request(::my_interfaces::srv::SetTurtleName_Event & msg)
  : msg_(msg)
  {}
  Init_SetTurtleName_Event_response request(::my_interfaces::srv::SetTurtleName_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTurtleName_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Event msg_;
};

class Init_SetTurtleName_Event_info
{
public:
  Init_SetTurtleName_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTurtleName_Event_request info(::my_interfaces::srv::SetTurtleName_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTurtleName_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::SetTurtleName_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetTurtleName_Event>()
{
  return my_interfaces::srv::builder::Init_SetTurtleName_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SET_TURTLE_NAME__BUILDER_HPP_
