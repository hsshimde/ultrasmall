// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/OCMPMissionPlan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mission_area'
#include "msg05_base/msg/detail/rect__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__OCMPMissionPlan __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__OCMPMissionPlan __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OCMPMissionPlan_
{
  using Type = OCMPMissionPlan_<ContainerAllocator>;

  explicit OCMPMissionPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_name = "";
    }
  }

  explicit OCMPMissionPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_name(_alloc),
    mission_area(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_name = "";
    }
  }

  // field types and members
  using _mission_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_name_type mission_name;
  using _mission_area_type =
    msg05_base::msg::Rect_<ContainerAllocator>;
  _mission_area_type mission_area;

  // setters for named parameter idiom
  Type & set__mission_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_name = _arg;
    return *this;
  }
  Type & set__mission_area(
    const msg05_base::msg::Rect_<ContainerAllocator> & _arg)
  {
    this->mission_area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__OCMPMissionPlan
    std::shared_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__OCMPMissionPlan
    std::shared_ptr<msg05_base::msg::OCMPMissionPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OCMPMissionPlan_ & other) const
  {
    if (this->mission_name != other.mission_name) {
      return false;
    }
    if (this->mission_area != other.mission_area) {
      return false;
    }
    return true;
  }
  bool operator!=(const OCMPMissionPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OCMPMissionPlan_

// alias to use template instance with default allocator
using OCMPMissionPlan =
  msg05_base::msg::OCMPMissionPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_HPP_
