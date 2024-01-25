// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/AllocSwarmPlanResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__AllocSwarmPlanResult __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__AllocSwarmPlanResult __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllocSwarmPlanResult_
{
  using Type = AllocSwarmPlanResult_<ContainerAllocator>;

  explicit AllocSwarmPlanResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AllocSwarmPlanResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__AllocSwarmPlanResult
    std::shared_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__AllocSwarmPlanResult
    std::shared_ptr<msg05_base::msg::AllocSwarmPlanResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllocSwarmPlanResult_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllocSwarmPlanResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllocSwarmPlanResult_

// alias to use template instance with default allocator
using AllocSwarmPlanResult =
  msg05_base::msg::AllocSwarmPlanResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_HPP_
