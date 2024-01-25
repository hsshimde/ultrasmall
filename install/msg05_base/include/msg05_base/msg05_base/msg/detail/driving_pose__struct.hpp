// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/DrivingPose.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__struct.hpp"
// Member 'orientation'
#include "msg05_base/msg/detail/vector4_f32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__DrivingPose __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__DrivingPose __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingPose_
{
  using Type = DrivingPose_<ContainerAllocator>;

  explicit DrivingPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->timestamp = 0ul;
    }
  }

  explicit DrivingPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->timestamp = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _position_type =
    msg05_base::msg::Vector3I16_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    msg05_base::msg::Vector4F32_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position(
    const msg05_base::msg::Vector3I16_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const msg05_base::msg::Vector4F32_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::DrivingPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::DrivingPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::DrivingPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::DrivingPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__DrivingPose
    std::shared_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__DrivingPose
    std::shared_ptr<msg05_base::msg::DrivingPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingPose_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingPose_

// alias to use template instance with default allocator
using DrivingPose =
  msg05_base::msg::DrivingPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_HPP_
