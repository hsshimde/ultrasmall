// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'groups'
#include "msg05_base/msg/detail/group__struct.hpp"
// Member 'mission_area'
// Member 'mission_sub_area'
#include "msg05_base/msg/detail/rect__struct.hpp"
// Member 'targets'
#include "msg05_base/msg/detail/target__struct.hpp"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Plan __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Plan __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plan_
{
  using Type = Plan_<ContainerAllocator>;

  explicit Plan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_area(_init),
    mission_sub_area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0;
      this->task = 0;
    }
  }

  explicit Plan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_area(_alloc, _init),
    mission_sub_area(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0;
      this->task = 0;
    }
  }

  // field types and members
  using _groups_type =
    std::vector<msg05_base::msg::Group_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::Group_<ContainerAllocator>>>;
  _groups_type groups;
  using _mission_type =
    uint8_t;
  _mission_type mission;
  using _task_type =
    uint8_t;
  _task_type task;
  using _mission_area_type =
    msg05_base::msg::Rect_<ContainerAllocator>;
  _mission_area_type mission_area;
  using _mission_sub_area_type =
    msg05_base::msg::Rect_<ContainerAllocator>;
  _mission_sub_area_type mission_sub_area;
  using _targets_type =
    std::vector<msg05_base::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::Target_<ContainerAllocator>>>;
  _targets_type targets;
  using _formation_type =
    std::vector<msg05_base::msg::PointI16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PointI16_<ContainerAllocator>>>;
  _formation_type formation;

  // setters for named parameter idiom
  Type & set__groups(
    const std::vector<msg05_base::msg::Group_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::Group_<ContainerAllocator>>> & _arg)
  {
    this->groups = _arg;
    return *this;
  }
  Type & set__mission(
    const uint8_t & _arg)
  {
    this->mission = _arg;
    return *this;
  }
  Type & set__task(
    const uint8_t & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__mission_area(
    const msg05_base::msg::Rect_<ContainerAllocator> & _arg)
  {
    this->mission_area = _arg;
    return *this;
  }
  Type & set__mission_sub_area(
    const msg05_base::msg::Rect_<ContainerAllocator> & _arg)
  {
    this->mission_sub_area = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<msg05_base::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::Target_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
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
    msg05_base::msg::Plan_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Plan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Plan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Plan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Plan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Plan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Plan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Plan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Plan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Plan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Plan
    std::shared_ptr<msg05_base::msg::Plan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Plan
    std::shared_ptr<msg05_base::msg::Plan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plan_ & other) const
  {
    if (this->groups != other.groups) {
      return false;
    }
    if (this->mission != other.mission) {
      return false;
    }
    if (this->task != other.task) {
      return false;
    }
    if (this->mission_area != other.mission_area) {
      return false;
    }
    if (this->mission_sub_area != other.mission_sub_area) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    if (this->formation != other.formation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plan_

// alias to use template instance with default allocator
using Plan =
  msg05_base::msg::Plan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_HPP_
