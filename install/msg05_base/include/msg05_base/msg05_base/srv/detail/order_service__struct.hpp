// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:srv/OrderService.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__STRUCT_HPP_
#define MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__OrderService_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__OrderService_Request __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrderService_Request_
{
  using Type = OrderService_Request_<ContainerAllocator>;

  explicit OrderService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  explicit OrderService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  // field types and members
  using _cmd_type =
    uint8_t;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const uint8_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::srv::OrderService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::OrderService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::OrderService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::OrderService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__OrderService_Request
    std::shared_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__OrderService_Request
    std::shared_ptr<msg05_base::srv::OrderService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderService_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderService_Request_

// alias to use template instance with default allocator
using OrderService_Request =
  msg05_base::srv::OrderService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__OrderService_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__OrderService_Response __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrderService_Response_
{
  using Type = OrderService_Response_<ContainerAllocator>;

  explicit OrderService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit OrderService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    msg05_base::srv::OrderService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::OrderService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::OrderService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::OrderService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__OrderService_Response
    std::shared_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__OrderService_Response
    std::shared_ptr<msg05_base::srv::OrderService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderService_Response_

// alias to use template instance with default allocator
using OrderService_Response =
  msg05_base::srv::OrderService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base

namespace msg05_base
{

namespace srv
{

struct OrderService
{
  using Request = msg05_base::srv::OrderService_Request;
  using Response = msg05_base::srv::OrderService_Response;
};

}  // namespace srv

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__STRUCT_HPP_
