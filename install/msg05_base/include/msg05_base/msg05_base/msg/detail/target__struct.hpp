// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "msg05_base/msg/detail/vector3_f32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Target __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Target __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Target_
{
  using Type = Target_<ContainerAllocator>;

  explicit Target_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->theta = 0;
    }
  }

  explicit Target_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->theta = 0;
    }
  }

  // field types and members
  using _action_type =
    uint8_t;
  _action_type action;
  using _position_type =
    msg05_base::msg::Vector3F32_<ContainerAllocator>;
  _position_type position;
  using _theta_type =
    int16_t;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__position(
    const msg05_base::msg::Vector3F32_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__theta(
    const int16_t & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::Target_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Target_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Target_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Target_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Target_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Target_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Target_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Target_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Target_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Target_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Target
    std::shared_ptr<msg05_base::msg::Target_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Target
    std::shared_ptr<msg05_base::msg::Target_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Target_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Target_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Target_

// alias to use template instance with default allocator
using Target =
  msg05_base::msg::Target_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_HPP_
