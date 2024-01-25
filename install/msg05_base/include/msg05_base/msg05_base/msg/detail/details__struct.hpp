// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Details.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Details __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Details __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Details_
{
  using Type = Details_<ContainerAllocator>;

  explicit Details_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = 0;
      this->mission_type = 0;
      this->mission_status = 0;
      this->action_type = 0;
      this->speed = 0;
    }
  }

  explicit Details_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = 0;
      this->mission_type = 0;
      this->mission_status = 0;
      this->action_type = 0;
      this->speed = 0;
    }
  }

  // field types and members
  using _task_type =
    uint8_t;
  _task_type task;
  using _mission_type_type =
    uint8_t;
  _mission_type_type mission_type;
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;
  using _action_type_type =
    uint8_t;
  _action_type_type action_type;
  using _speed_type =
    uint8_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__task(
    const uint8_t & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__mission_type(
    const uint8_t & _arg)
  {
    this->mission_type = _arg;
    return *this;
  }
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }
  Type & set__action_type(
    const uint8_t & _arg)
  {
    this->action_type = _arg;
    return *this;
  }
  Type & set__speed(
    const uint8_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::Details_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Details_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Details_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Details_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Details_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Details_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Details_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Details_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Details_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Details_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Details
    std::shared_ptr<msg05_base::msg::Details_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Details
    std::shared_ptr<msg05_base::msg::Details_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Details_ & other) const
  {
    if (this->task != other.task) {
      return false;
    }
    if (this->mission_type != other.mission_type) {
      return false;
    }
    if (this->mission_status != other.mission_status) {
      return false;
    }
    if (this->action_type != other.action_type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Details_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Details_

// alias to use template instance with default allocator
using Details =
  msg05_base::msg::Details_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_HPP_
