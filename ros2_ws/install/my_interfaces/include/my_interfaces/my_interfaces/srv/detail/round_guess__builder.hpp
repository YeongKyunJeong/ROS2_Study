// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/RoundGuess.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/round_guess.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__ROUND_GUESS__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__ROUND_GUESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/round_guess__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoundGuess_Request_letter
{
public:
  Init_RoundGuess_Request_letter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::RoundGuess_Request letter(::my_interfaces::srv::RoundGuess_Request::_letter_type arg)
  {
    msg_.letter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::RoundGuess_Request>()
{
  return my_interfaces::srv::builder::Init_RoundGuess_Request_letter();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoundGuess_Response_board
{
public:
  explicit Init_RoundGuess_Response_board(::my_interfaces::srv::RoundGuess_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::RoundGuess_Response board(::my_interfaces::srv::RoundGuess_Response::_board_type arg)
  {
    msg_.board = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Response msg_;
};

class Init_RoundGuess_Response_done
{
public:
  explicit Init_RoundGuess_Response_done(::my_interfaces::srv::RoundGuess_Response & msg)
  : msg_(msg)
  {}
  Init_RoundGuess_Response_board done(::my_interfaces::srv::RoundGuess_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return Init_RoundGuess_Response_board(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Response msg_;
};

class Init_RoundGuess_Response_correct
{
public:
  Init_RoundGuess_Response_correct()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoundGuess_Response_done correct(::my_interfaces::srv::RoundGuess_Response::_correct_type arg)
  {
    msg_.correct = std::move(arg);
    return Init_RoundGuess_Response_done(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::RoundGuess_Response>()
{
  return my_interfaces::srv::builder::Init_RoundGuess_Response_correct();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_RoundGuess_Event_response
{
public:
  explicit Init_RoundGuess_Event_response(::my_interfaces::srv::RoundGuess_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::RoundGuess_Event response(::my_interfaces::srv::RoundGuess_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Event msg_;
};

class Init_RoundGuess_Event_request
{
public:
  explicit Init_RoundGuess_Event_request(::my_interfaces::srv::RoundGuess_Event & msg)
  : msg_(msg)
  {}
  Init_RoundGuess_Event_response request(::my_interfaces::srv::RoundGuess_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RoundGuess_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Event msg_;
};

class Init_RoundGuess_Event_info
{
public:
  Init_RoundGuess_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoundGuess_Event_request info(::my_interfaces::srv::RoundGuess_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RoundGuess_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::RoundGuess_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::RoundGuess_Event>()
{
  return my_interfaces::srv::builder::Init_RoundGuess_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__ROUND_GUESS__BUILDER_HPP_
