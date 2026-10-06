// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mission_interface:msg/Mission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interface/msg/mission.hpp"


#ifndef MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_HPP_
#define MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mission_interface__msg__Mission __attribute__((deprecated))
#else
# define DEPRECATED__mission_interface__msg__Mission __declspec(deprecated)
#endif

namespace mission_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mission_
{
  using Type = Mission_<ContainerAllocator>;

  explicit Mission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Mission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr int64_t MISSION_WORKING_STATE =
    0;
  static constexpr int64_t MISSION_SUCCESS_STATE =
    1;
  static constexpr int64_t MISSION_FAIL_STATE =
    2;

  // pointer types
  using RawPtr =
    mission_interface::msg::Mission_<ContainerAllocator> *;
  using ConstRawPtr =
    const mission_interface::msg::Mission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mission_interface::msg::Mission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mission_interface::msg::Mission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mission_interface::msg::Mission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mission_interface::msg::Mission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mission_interface::msg::Mission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mission_interface::msg::Mission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mission_interface::msg::Mission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mission_interface::msg::Mission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mission_interface__msg__Mission
    std::shared_ptr<mission_interface::msg::Mission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mission_interface__msg__Mission
    std::shared_ptr<mission_interface::msg::Mission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_

// alias to use template instance with default allocator
using Mission =
  mission_interface::msg::Mission_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Mission_<ContainerAllocator>::MISSION_WORKING_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Mission_<ContainerAllocator>::MISSION_SUCCESS_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Mission_<ContainerAllocator>::MISSION_FAIL_STATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mission_interface

#endif  // MISSION_INTERFACE__MSG__DETAIL__MISSION__STRUCT_HPP_
