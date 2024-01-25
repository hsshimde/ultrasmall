// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__Image __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__Image __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->timestamp = 0ul;
    }
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

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
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__Image
    std::shared_ptr<msg05_base::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__Image
    std::shared_ptr<msg05_base::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
  msg05_base::msg::Image_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_HPP_
