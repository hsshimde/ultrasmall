// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'actuator_state'
// Member 'low_power_mode'
// Member 'network_connection'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__msg__PlatformState __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__msg__PlatformState __declspec(deprecated)
#endif

namespace msg05_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatformState_
{
  using Type = PlatformState_<ContainerAllocator>;

  explicit PlatformState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actuator_state(_init),
    low_power_mode(_init),
    network_connection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
      this->group_id = 0;
      this->battery_percentage = 0;
      this->timestamp = 0ul;
    }
  }

  explicit PlatformState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actuator_state(_alloc, _init),
    low_power_mode(_alloc, _init),
    network_connection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0;
      this->group_id = 0;
      this->battery_percentage = 0;
      this->timestamp = 0ul;
    }
  }

  // field types and members
  using _platform_id_type =
    uint8_t;
  _platform_id_type platform_id;
  using _group_id_type =
    uint8_t;
  _group_id_type group_id;
  using _actuator_state_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _actuator_state_type actuator_state;
  using _low_power_mode_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _low_power_mode_type low_power_mode;
  using _battery_percentage_type =
    uint8_t;
  _battery_percentage_type battery_percentage;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _network_connection_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _network_connection_type network_connection;

  // setters for named parameter idiom
  Type & set__platform_id(
    const uint8_t & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }
  Type & set__group_id(
    const uint8_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__actuator_state(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->actuator_state = _arg;
    return *this;
  }
  Type & set__low_power_mode(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->low_power_mode = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const uint8_t & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__network_connection(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->network_connection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::msg::PlatformState_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::msg::PlatformState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::msg::PlatformState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::msg::PlatformState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::msg::PlatformState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::msg::PlatformState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__msg__PlatformState
    std::shared_ptr<msg05_base::msg::PlatformState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__msg__PlatformState
    std::shared_ptr<msg05_base::msg::PlatformState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatformState_ & other) const
  {
    if (this->platform_id != other.platform_id) {
      return false;
    }
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->actuator_state != other.actuator_state) {
      return false;
    }
    if (this->low_power_mode != other.low_power_mode) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->network_connection != other.network_connection) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatformState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatformState_

// alias to use template instance with default allocator
using PlatformState =
  msg05_base::msg::PlatformState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_HPP_
