// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Group.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'registrations'
#include "msg05_base/msg/detail/platform_registration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Group __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Group __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Group_
{
  using Type = Group_<ContainerAllocator>;

  explicit Group_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->leader_id = 0;
    }
  }

  explicit Group_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->leader_id = 0;
    }
  }

  // field types and members
  using _group_id_type =
    uint8_t;
  _group_id_type group_id;
  using _leader_id_type =
    uint8_t;
  _leader_id_type leader_id;
  using _registrations_type =
    std::vector<msg05_base::msg::PlatformRegistration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PlatformRegistration_<ContainerAllocator>>>;
  _registrations_type registrations;

  // setters for named parameter idiom
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
  Type & set__registrations(
    const std::vector<msg05_base::msg::PlatformRegistration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PlatformRegistration_<ContainerAllocator>>> & _arg)
  {
    this->registrations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::Group_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Group_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Group_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Group_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Group_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Group_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Group_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Group_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Group_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Group_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Group
    std::shared_ptr<msg05_base::msg::Group_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Group
    std::shared_ptr<msg05_base::msg::Group_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Group_ & other) const
  {
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->leader_id != other.leader_id) {
      return false;
    }
    if (this->registrations != other.registrations) {
      return false;
    }
    return true;
  }
  bool operator!=(const Group_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Group_

// alias to use template instance with default allocator
using Group =
  msg05_base::msg::Group_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_HPP_
