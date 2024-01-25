// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/SwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__SwarmGroups __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__SwarmGroups __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwarmGroups_
{
  using Type = SwarmGroups_<ContainerAllocator>;

  explicit SwarmGroups_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
      this->group_id = 0;
      this->leader_id = 0;
      this->platform_type = 0;
    }
  }

  explicit SwarmGroups_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
      this->group_id = 0;
      this->leader_id = 0;
      this->platform_type = 0;
    }
  }

  // field types and members
  using _platform_id_type =
    uint8_t;
  _platform_id_type platform_id;
  using _group_id_type =
    uint8_t;
  _group_id_type group_id;
  using _leader_id_type =
    uint8_t;
  _leader_id_type leader_id;
  using _platform_type_type =
    uint8_t;
  _platform_type_type platform_type;

  // setters for named parameter idiom
  Type & set__platform_id(
    const uint8_t & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }
  Type & set__group_id(
    const uint8_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__leader_id(
    const uint8_t & _arg)
  {
    this->leader_id = _arg;
    return *this;
  }
  Type & set__platform_type(
    const uint8_t & _arg)
  {
    this->platform_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::SwarmGroups_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::SwarmGroups_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SwarmGroups_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SwarmGroups_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__SwarmGroups
    std::shared_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__SwarmGroups
    std::shared_ptr<msg05_base::msg::SwarmGroups_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwarmGroups_ & other) const
  {
    if (this->platform_id != other.platform_id) {
      return false;
    }
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->leader_id != other.leader_id) {
      return false;
    }
    if (this->platform_type != other.platform_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwarmGroups_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwarmGroups_

// alias to use template instance with default allocator
using SwarmGroups =
  msg05_base::msg::SwarmGroups_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_HPP_
