// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "msg05_base/msg/detail/driving_pose__struct.hpp"
// Member 'linear'
// Member 'angular'
#include "msg05_base/msg/detail/vector3_f32__struct.hpp"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__DrivingTarget __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__DrivingTarget __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingTarget_
{
  using Type = DrivingTarget_<ContainerAllocator>;

  explicit DrivingTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    linear(_init),
    angular(_init)
  {
    (void)_init;
  }

  explicit DrivingTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    linear(_alloc, _init),
    angular(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    msg05_base::msg::DrivingPose_<ContainerAllocator>;
  _pose_type pose;
  using _linear_type =
    msg05_base::msg::Vector3F32_<ContainerAllocator>;
  _linear_type linear;
  using _angular_type =
    msg05_base::msg::Vector3F32_<ContainerAllocator>;
  _angular_type angular;
  using _formation_type =
    std::vector<msg05_base::msg::PointI16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PointI16_<ContainerAllocator>>>;
  _formation_type formation;

  // setters for named parameter idiom
  Type & set__pose(
    const msg05_base::msg::DrivingPose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__linear(
    const msg05_base::msg::Vector3F32_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const msg05_base::msg::Vector3F32_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return *this;
  }
  Type & set__formation(
    const std::vector<msg05_base::msg::PointI16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PointI16_<ContainerAllocator>>> & _arg)
  {
    this->formation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::DrivingTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::DrivingTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::DrivingTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::DrivingTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__DrivingTarget
    std::shared_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__DrivingTarget
    std::shared_ptr<msg05_base::msg::DrivingTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingTarget_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    if (this->formation != other.formation) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingTarget_

// alias to use template instance with default allocator
using DrivingTarget =
  msg05_base::msg::DrivingTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_HPP_
