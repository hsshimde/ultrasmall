// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Rect.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__RECT__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__RECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'end'
#include "msg05_base/msg/detail/point_i16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Rect __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Rect __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rect_
{
  using Type = Rect_<ContainerAllocator>;

  explicit Rect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init)
  {
    (void)_init;
  }

  explicit Rect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    msg05_base::msg::PointI16_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    msg05_base::msg::PointI16_<ContainerAllocator>;
  _end_type end;

  // setters for named parameter idiom
  Type & set__start(
    const msg05_base::msg::PointI16_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const msg05_base::msg::PointI16_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::Rect_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Rect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Rect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Rect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Rect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Rect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Rect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Rect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Rect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Rect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Rect
    std::shared_ptr<msg05_base::msg::Rect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Rect
    std::shared_ptr<msg05_base::msg::Rect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rect_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rect_

// alias to use template instance with default allocator
using Rect =
  msg05_base::msg::Rect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__RECT__STRUCT_HPP_
