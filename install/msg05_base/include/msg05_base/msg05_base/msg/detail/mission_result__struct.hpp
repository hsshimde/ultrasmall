// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error'
#include "msg05_base/msg/detail/error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__MissionResult __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__MissionResult __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionResult_
{
  using Type = MissionResult_<ContainerAllocator>;

  explicit MissionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->mission_status = 0;
    }
  }

  explicit MissionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->mission_status = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;
  using _error_type =
    msg05_base::msg::Error_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }
  Type & set__error(
    const msg05_base::msg::Error_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::MissionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::MissionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::MissionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::MissionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::MissionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::MissionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::MissionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::MissionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::MissionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::MissionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__MissionResult
    std::shared_ptr<msg05_base::msg::MissionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__MissionResult
    std::shared_ptr<msg05_base::msg::MissionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionResult_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->mission_status != other.mission_status) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionResult_

// alias to use template instance with default allocator
using MissionResult =
  msg05_base::msg::MissionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_HPP_
