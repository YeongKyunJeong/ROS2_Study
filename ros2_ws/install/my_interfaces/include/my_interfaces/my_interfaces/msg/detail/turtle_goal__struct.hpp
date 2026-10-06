// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/turtle_goal.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__TurtleGoal __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__TurtleGoal __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleGoal_
{
  using Type = TurtleGoal_<ContainerAllocator>;

  explicit TurtleGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
      this->speed = 0.0;
    }
  }

  explicit TurtleGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : turtle_name(_alloc),
    goal_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
      this->speed = 0.0;
    }
  }

  // field types and members
  using _turtle_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _turtle_name_type turtle_name;
  using _goal_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _goal_point_type goal_point;
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__turtle_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->turtle_name = _arg;
    return *this;
  }
  Type & set__goal_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->goal_point = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::TurtleGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::TurtleGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::TurtleGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::TurtleGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__TurtleGoal
    std::shared_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__TurtleGoal
    std::shared_ptr<my_interfaces::msg::TurtleGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleGoal_ & other) const
  {
    if (this->turtle_name != other.turtle_name) {
      return false;
    }
    if (this->goal_point != other.goal_point) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleGoal_

// alias to use template instance with default allocator
using TurtleGoal =
  my_interfaces::msg::TurtleGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__TURTLE_GOAL__STRUCT_HPP_
