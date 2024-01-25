// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/bounding_box_pos__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__BoundingBoxPoses __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__BoundingBoxPoses __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxPoses_
{
  using Type = BoundingBoxPoses_<ContainerAllocator>;

  explicit BoundingBoxPoses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->header_time = 0ul;
      this->image_header_time = 0ul;
    }
  }

  explicit BoundingBoxPoses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->header_time = 0ul;
      this->image_header_time = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _header_time_type =
    uint32_t;
  _header_time_type header_time;
  using _image_header_time_type =
    uint32_t;
  _image_header_time_type image_header_time;
  using _data_type =
    std::vector<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__header_time(
    const uint32_t & _arg)
  {
    this->header_time = _arg;
    return *this;
  }
  Type & set__image_header_time(
    const uint32_t & _arg)
  {
    this->image_header_time = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::BoundingBoxPos_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__BoundingBoxPoses
    std::shared_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__BoundingBoxPoses
    std::shared_ptr<msg05_base::msg::BoundingBoxPoses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxPoses_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->header_time != other.header_time) {
      return false;
    }
    if (this->image_header_time != other.image_header_time) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxPoses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxPoses_

// alias to use template instance with default allocator
using BoundingBoxPoses =
  msg05_base::msg::BoundingBoxPoses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_HPP_
