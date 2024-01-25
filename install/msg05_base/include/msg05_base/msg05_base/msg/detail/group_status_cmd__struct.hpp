// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/GroupStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__GroupStatusCmd __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__GroupStatusCmd __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroupStatusCmd_
{
  using Type = GroupStatusCmd_<ContainerAllocator>;

  explicit GroupStatusCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->mission_status = 0;
      this->task = 0;
    }
  }

  explicit GroupStatusCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->mission_status = 0;
      this->task = 0;
    }
  }

  // field types and members
  using _group_id_type =
    uint8_t;
  _group_id_type group_id;
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;
  using _task_type =
    uint8_t;
  _task_type task;

  // setters for named parameter idiom
  Type & set__group_id(
    const uint8_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }
  Type & set__task(
    const uint8_t & _arg)
  {
    this->task = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::GroupStatusCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::GroupStatusCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::GroupStatusCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::GroupStatusCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__GroupStatusCmd
    std::shared_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__GroupStatusCmd
    std::shared_ptr<msg05_base::msg::GroupStatusCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupStatusCmd_ & other) const
  {
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->mission_status != other.mission_status) {
      return false;
    }
    if (this->task != other.task) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupStatusCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupStatusCmd_

// alias to use template instance with default allocator
using GroupStatusCmd =
  msg05_base::msg::GroupStatusCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_HPP_
