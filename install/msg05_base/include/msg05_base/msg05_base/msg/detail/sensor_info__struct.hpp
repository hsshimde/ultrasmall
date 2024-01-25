// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/SensorInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "msg05_base/msg/detail/platform_state__struct.hpp"
// Member 'bbox'
#include "msg05_base/msg/detail/bounding_box_poses__struct.hpp"
// Member 'driving'
#include "msg05_base/msg/detail/driving_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__SensorInfo __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__SensorInfo __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorInfo_
{
  using Type = SensorInfo_<ContainerAllocator>;

  explicit SensorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init),
    bbox(_init),
    driving(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit SensorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init),
    bbox(_alloc, _init),
    driving(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _state_type =
    msg05_base::msg::PlatformState_<ContainerAllocator>;
  _state_type state;
  using _bbox_type =
    msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>;
  _bbox_type bbox;
  using _driving_type =
    msg05_base::msg::DrivingPose_<ContainerAllocator>;
  _driving_type driving;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__state(
    const msg05_base::msg::PlatformState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__bbox(
    const msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__driving(
    const msg05_base::msg::DrivingPose_<ContainerAllocator> & _arg)
  {
    this->driving = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::SensorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::SensorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SensorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SensorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__SensorInfo
    std::shared_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__SensorInfo
    std::shared_ptr<msg05_base::msg::SensorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->driving != other.driving) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorInfo_

// alias to use template instance with default allocator
using SensorInfo =
  msg05_base::msg::SensorInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_HPP_
