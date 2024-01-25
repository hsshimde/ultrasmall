// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg05_base:srv/AllocSwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_HPP_
#define MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'swarmgroups'
#include "msg05_base/msg/detail/swarm_groups__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__AllocSwarmGroups_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__AllocSwarmGroups_Request __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AllocSwarmGroups_Request_
{
  using Type = AllocSwarmGroups_Request_<ContainerAllocator>;

  explicit AllocSwarmGroups_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AllocSwarmGroups_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _swarmgroups_type =
    std::vector<msg05_base::msg::SwarmGroups_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::SwarmGroups_<ContainerAllocator>>>;
  _swarmgroups_type swarmgroups;

  // setters for named parameter idiom
  Type & set__swarmgroups(
    const std::vector<msg05_base::msg::SwarmGroups_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg05_base::msg::SwarmGroups_<ContainerAllocator>>> & _arg)
  {
    this->swarmgroups = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__AllocSwarmGroups_Request
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__AllocSwarmGroups_Request
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllocSwarmGroups_Request_ & other) const
  {
    if (this->swarmgroups != other.swarmgroups) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllocSwarmGroups_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllocSwarmGroups_Request_

// alias to use template instance with default allocator
using AllocSwarmGroups_Request =
  msg05_base::srv::AllocSwarmGroups_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg05_base__srv__AllocSwarmGroups_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg05_base__srv__AllocSwarmGroups_Response __declspec(deprecated)
#endif

namespace msg05_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AllocSwarmGroups_Response_
{
  using Type = AllocSwarmGroups_Response_<ContainerAllocator>;

  explicit AllocSwarmGroups_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit AllocSwarmGroups_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg05_base__srv__AllocSwarmGroups_Response
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg05_base__srv__AllocSwarmGroups_Response
    std::shared_ptr<msg05_base::srv::AllocSwarmGroups_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllocSwarmGroups_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllocSwarmGroups_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllocSwarmGroups_Response_

// alias to use template instance with default allocator
using AllocSwarmGroups_Response =
  msg05_base::srv::AllocSwarmGroups_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg05_base

namespace msg05_base
{

namespace srv
{

struct AllocSwarmGroups
{
  using Request = msg05_base::srv::AllocSwarmGroups_Request;
  using Response = msg05_base::srv::AllocSwarmGroups_Response;
};

}  // namespace srv

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_HPP_
