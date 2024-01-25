// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/BoundingBoxPos.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bbox'
#include "msg05_base/msg/detail/rect__struct.hpp"
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__BoundingBoxPos __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__BoundingBoxPos __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxPos_
{
  using Type = BoundingBoxPos_<ContainerAllocator>;

  explicit BoundingBoxPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability_percent = 0;
      this->class_id = "";
      this->time = 0ul;
    }
  }

  explicit BoundingBoxPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_alloc, _init),
    position(_alloc, _init),
    class_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability_percent = 0;
      this->class_id = "";
      this->time = 0ul;
    }
  }

  // field types and members
  using _probability_percent_type =
    int8_t;
  _probability_percent_type probability_percent;
  using _bbox_type =
    msg05_base::msg::Rect_<ContainerAllocator>;
  _bbox_type bbox;
  using _position_type =
    msg05_base::msg::Vector3I16_<ContainerAllocator>;
  _position_type position;
  using _class_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_id_type class_id;
  using _time_type =
    uint32_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__probability_percent(
    const int8_t & _arg)
  {
    this->probability_percent = _arg;
    return *this;
  }
  Type & set__bbox(
    const msg05_base::msg::Rect_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__position(
    const msg05_base::msg::Vector3I16_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__class_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__time(
    const uint32_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::BoundingBoxPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::BoundingBoxPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__BoundingBoxPos
    std::shared_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__BoundingBoxPos
    std::shared_ptr<msg05_base::msg::BoundingBoxPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxPos_ & other) const
  {
    if (this->probability_percent != other.probability_percent) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxPos_

// alias to use template instance with default allocator
using BoundingBoxPos =
  msg05_base::msg::BoundingBoxPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_HPP_
