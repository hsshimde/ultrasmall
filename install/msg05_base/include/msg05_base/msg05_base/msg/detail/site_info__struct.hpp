// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/SiteInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "msg05_base/msg/detail/point_i16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__SiteInfo __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__SiteInfo __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SiteInfo_
{
  using Type = SiteInfo_<ContainerAllocator>;

  explicit SiteInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SiteInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<msg05_base::msg::PointI16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PointI16_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<msg05_base::msg::PointI16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::PointI16_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::SiteInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::SiteInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SiteInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::SiteInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__SiteInfo
    std::shared_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__SiteInfo
    std::shared_ptr<msg05_base::msg::SiteInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SiteInfo_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const SiteInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SiteInfo_

// alias to use template instance with default allocator
using SiteInfo =
  msg05_base::msg::SiteInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_HPP_
