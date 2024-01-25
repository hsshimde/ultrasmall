// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/MissionResults.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/mission_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__MissionResults __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__MissionResults __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionResults_
{
  using Type = MissionResults_<ContainerAllocator>;

  explicit MissionResults_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MissionResults_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<msg05_base::msg::MissionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::MissionResult_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<msg05_base::msg::MissionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::MissionResult_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::MissionResults_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::MissionResults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::MissionResults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::MissionResults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::MissionResults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::MissionResults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::MissionResults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::MissionResults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::MissionResults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::MissionResults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__MissionResults
    std::shared_ptr<msg05_base::msg::MissionResults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__MissionResults
    std::shared_ptr<msg05_base::msg::MissionResults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionResults_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionResults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionResults_

// alias to use template instance with default allocator
using MissionResults =
  msg05_base::msg::MissionResults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_HPP_
