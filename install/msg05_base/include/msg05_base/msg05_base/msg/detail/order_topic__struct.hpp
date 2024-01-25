// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/OrderTopic.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__OrderTopic __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__OrderTopic __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrderTopic_
{
  using Type = OrderTopic_<ContainerAllocator>;

  explicit OrderTopic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oc_mp_cmd = 0;
    }
  }

  explicit OrderTopic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oc_mp_cmd = 0;
    }
  }

  // field types and members
  using _oc_mp_cmd_type =
    uint8_t;
  _oc_mp_cmd_type oc_mp_cmd;

  // setters for named parameter idiom
  Type & set__oc_mp_cmd(
    const uint8_t & _arg)
  {
    this->oc_mp_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::OrderTopic_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::OrderTopic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::OrderTopic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::OrderTopic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__OrderTopic
    std::shared_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__OrderTopic
    std::shared_ptr<msg05_base::msg::OrderTopic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderTopic_ & other) const
  {
    if (this->oc_mp_cmd != other.oc_mp_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderTopic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderTopic_

// alias to use template instance with default allocator
using OrderTopic =
  msg05_base::msg::OrderTopic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__STRUCT_HPP_
