// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:srv/PlatformRegistrationInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__STRUCT_HPP_
#define MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'registration'
#include "msg05_base/msg/detail/platform_registration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Request __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlatformRegistrationInfo_Request_
{
  using Type = PlatformRegistrationInfo_Request_<ContainerAllocator>;

  explicit PlatformRegistrationInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : registration(_init)
  {
    (void)_init;
  }

  explicit PlatformRegistrationInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : registration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _registration_type =
    msg05_base::msg::PlatformRegistration_<ContainerAllocator>;
  _registration_type registration;

  // setters for named parameter idiom
  Type & set__registration(
    const msg05_base::msg::PlatformRegistration_<ContainerAllocator> & _arg)
  {
    this->registration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Request
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Request
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatformRegistrationInfo_Request_ & other) const
  {
    if (this->registration != other.registration) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatformRegistrationInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatformRegistrationInfo_Request_

// alias to use template instance with default allocator
using PlatformRegistrationInfo_Request =
  msg05_base::srv::PlatformRegistrationInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Response __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlatformRegistrationInfo_Response_
{
  using Type = PlatformRegistrationInfo_Response_<ContainerAllocator>;

  explicit PlatformRegistrationInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit PlatformRegistrationInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Response
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__PlatformRegistrationInfo_Response
    std::shared_ptr<msg05_base::srv::PlatformRegistrationInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatformRegistrationInfo_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatformRegistrationInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatformRegistrationInfo_Response_

// alias to use template instance with default allocator
using PlatformRegistrationInfo_Response =
  msg05_base::srv::PlatformRegistrationInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base

namespace msg05_base
{

namespace srv
{

struct PlatformRegistrationInfo
{
  using Request = msg05_base::srv::PlatformRegistrationInfo_Request;
  using Response = msg05_base::srv::PlatformRegistrationInfo_Response;
};

}  // namespace srv

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__STRUCT_HPP_
