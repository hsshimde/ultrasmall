// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/PlatformResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__PlatformResult __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__PlatformResult __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatformResult_
{
  using Type = PlatformResult_<ContainerAllocator>;

  explicit PlatformResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
    }
  }

  explicit PlatformResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
    }
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _result_type result;
  using _platform_id_type =
    uint8_t;
  _platform_id_type platform_id;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__platform_id(
    const uint8_t & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::PlatformResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::PlatformResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__PlatformResult
    std::shared_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__PlatformResult
    std::shared_ptr<msg05_base::msg::PlatformResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatformResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->platform_id != other.platform_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatformResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatformResult_

// alias to use template instance with default allocator
using PlatformResult =
  msg05_base::msg::PlatformResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_HPP_
