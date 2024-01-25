// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/PlatformRegistration.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ip'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__PlatformRegistration __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__PlatformRegistration __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatformRegistration_
{
  using Type = PlatformRegistration_<ContainerAllocator>;

  explicit PlatformRegistration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->platform_type = 0;
    }
  }

  explicit PlatformRegistration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->platform_type = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _ip_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _ip_type ip;
  using _platform_type_type =
    uint8_t;
  _platform_type_type platform_type;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__ip(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->ip = _arg;
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
    msg05_base::msg::PlatformRegistration_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::PlatformRegistration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformRegistration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformRegistration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__PlatformRegistration
    std::shared_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__PlatformRegistration
    std::shared_ptr<msg05_base::msg::PlatformRegistration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatformRegistration_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->platform_type != other.platform_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatformRegistration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatformRegistration_

// alias to use template instance with default allocator
using PlatformRegistration =
  msg05_base::msg::PlatformRegistration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_HPP_
