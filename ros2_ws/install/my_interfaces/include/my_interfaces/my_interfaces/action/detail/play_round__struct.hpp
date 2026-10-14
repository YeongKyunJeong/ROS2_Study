// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:action/PlayRound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/action/play_round.hpp"


#ifndef MY_INTERFACES__ACTION__DETAIL__PLAY_ROUND__STRUCT_HPP_
#define MY_INTERFACES__ACTION__DETAIL__PLAY_ROUND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_Goal __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_Goal_
{
  using Type = PlayRound_Goal_<ContainerAllocator>;

  explicit PlayRound_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->word = "";
    }
  }

  explicit PlayRound_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : word(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->word = "";
    }
  }

  // field types and members
  using _word_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _word_type word;

  // setters for named parameter idiom
  Type & set__word(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->word = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_Goal
    std::shared_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_Goal
    std::shared_ptr<my_interfaces::action::PlayRound_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_Goal_ & other) const
  {
    if (this->word != other.word) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_Goal_

// alias to use template instance with default allocator
using PlayRound_Goal =
  my_interfaces::action::PlayRound_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_Result __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_Result_
{
  using Type = PlayRound_Result_<ContainerAllocator>;

  explicit PlayRound_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
      this->board_result = "";
      this->tries = 0l;
    }
  }

  explicit PlayRound_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : board_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
      this->board_result = "";
      this->tries = 0l;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;
  using _board_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _board_result_type board_result;
  using _tries_type =
    int32_t;
  _tries_type tries;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }
  Type & set__board_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->board_result = _arg;
    return *this;
  }
  Type & set__tries(
    const int32_t & _arg)
  {
    this->tries = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_Result
    std::shared_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_Result
    std::shared_ptr<my_interfaces::action::PlayRound_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_Result_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    if (this->board_result != other.board_result) {
      return false;
    }
    if (this->tries != other.tries) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_Result_

// alias to use template instance with default allocator
using PlayRound_Result =
  my_interfaces::action::PlayRound_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_Feedback __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_Feedback_
{
  using Type = PlayRound_Feedback_<ContainerAllocator>;

  explicit PlayRound_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->letter = "";
      this->board_progress = "";
    }
  }

  explicit PlayRound_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : letter(_alloc),
    board_progress(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->letter = "";
      this->board_progress = "";
    }
  }

  // field types and members
  using _letter_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _letter_type letter;
  using _board_progress_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _board_progress_type board_progress;

  // setters for named parameter idiom
  Type & set__letter(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->letter = _arg;
    return *this;
  }
  Type & set__board_progress(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->board_progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_Feedback
    std::shared_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_Feedback
    std::shared_ptr<my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_Feedback_ & other) const
  {
    if (this->letter != other.letter) {
      return false;
    }
    if (this->board_progress != other.board_progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_Feedback_

// alias to use template instance with default allocator
using PlayRound_Feedback =
  my_interfaces::action::PlayRound_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_interfaces/action/detail/play_round__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_SendGoal_Request_
{
  using Type = PlayRound_SendGoal_Request_<ContainerAllocator>;

  explicit PlayRound_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PlayRound_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_interfaces::action::PlayRound_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_interfaces::action::PlayRound_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Request
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Request
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_SendGoal_Request_

// alias to use template instance with default allocator
using PlayRound_SendGoal_Request =
  my_interfaces::action::PlayRound_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_SendGoal_Response_
{
  using Type = PlayRound_SendGoal_Response_<ContainerAllocator>;

  explicit PlayRound_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PlayRound_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Response
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Response
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_SendGoal_Response_

// alias to use template instance with default allocator
using PlayRound_SendGoal_Response =
  my_interfaces::action::PlayRound_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Event __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_SendGoal_Event_
{
  using Type = PlayRound_SendGoal_Event_<ContainerAllocator>;

  explicit PlayRound_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlayRound_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Event
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_SendGoal_Event
    std::shared_ptr<my_interfaces::action::PlayRound_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_SendGoal_Event_

// alias to use template instance with default allocator
using PlayRound_SendGoal_Event =
  my_interfaces::action::PlayRound_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

namespace my_interfaces
{

namespace action
{

struct PlayRound_SendGoal
{
  using Request = my_interfaces::action::PlayRound_SendGoal_Request;
  using Response = my_interfaces::action::PlayRound_SendGoal_Response;
  using Event = my_interfaces::action::PlayRound_SendGoal_Event;
};

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_GetResult_Request_
{
  using Type = PlayRound_GetResult_Request_<ContainerAllocator>;

  explicit PlayRound_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PlayRound_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Request
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Request
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_GetResult_Request_

// alias to use template instance with default allocator
using PlayRound_GetResult_Request =
  my_interfaces::action::PlayRound_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "my_interfaces/action/detail/play_round__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_GetResult_Response_
{
  using Type = PlayRound_GetResult_Response_<ContainerAllocator>;

  explicit PlayRound_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PlayRound_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_interfaces::action::PlayRound_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_interfaces::action::PlayRound_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Response
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Response
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_GetResult_Response_

// alias to use template instance with default allocator
using PlayRound_GetResult_Response =
  my_interfaces::action::PlayRound_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_GetResult_Event __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_GetResult_Event_
{
  using Type = PlayRound_GetResult_Event_<ContainerAllocator>;

  explicit PlayRound_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlayRound_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_interfaces::action::PlayRound_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Event
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_GetResult_Event
    std::shared_ptr<my_interfaces::action::PlayRound_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_GetResult_Event_

// alias to use template instance with default allocator
using PlayRound_GetResult_Event =
  my_interfaces::action::PlayRound_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

namespace my_interfaces
{

namespace action
{

struct PlayRound_GetResult
{
  using Request = my_interfaces::action::PlayRound_GetResult_Request;
  using Response = my_interfaces::action::PlayRound_GetResult_Response;
  using Event = my_interfaces::action::PlayRound_GetResult_Event;
};

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_interfaces/action/detail/play_round__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__PlayRound_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__PlayRound_FeedbackMessage __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlayRound_FeedbackMessage_
{
  using Type = PlayRound_FeedbackMessage_<ContainerAllocator>;

  explicit PlayRound_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PlayRound_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_interfaces::action::PlayRound_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_interfaces::action::PlayRound_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__PlayRound_FeedbackMessage
    std::shared_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__PlayRound_FeedbackMessage
    std::shared_ptr<my_interfaces::action::PlayRound_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayRound_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayRound_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayRound_FeedbackMessage_

// alias to use template instance with default allocator
using PlayRound_FeedbackMessage =
  my_interfaces::action::PlayRound_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_interfaces
{

namespace action
{

struct PlayRound
{
  /// The goal message defined in the action definition.
  using Goal = my_interfaces::action::PlayRound_Goal;
  /// The result message defined in the action definition.
  using Result = my_interfaces::action::PlayRound_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_interfaces::action::PlayRound_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_interfaces::action::PlayRound_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_interfaces::action::PlayRound_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_interfaces::action::PlayRound_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PlayRound PlayRound;

}  // namespace action

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__PLAY_ROUND__STRUCT_HPP_
