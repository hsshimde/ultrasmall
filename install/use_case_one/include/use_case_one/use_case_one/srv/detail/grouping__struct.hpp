// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice

#ifndef USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_HPP_
#define USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__use_case_one__srv__Grouping_Request __attribute__((deprecated))
#else
# define DEPRECATED__use_case_one__srv__Grouping_Request __declspec(deprecated)
#endif

namespace use_case_one
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Grouping_Request_
{
  using Type = Grouping_Request_<ContainerAllocator>;

  explicit Grouping_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0l;
      this->is_leader = false;
      this->request_type = 0;
      this->group_idx = 0l;
    }
  }

  explicit Grouping_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0l;
      this->is_leader = false;
      this->request_type = 0;
      this->group_idx = 0l;
    }
  }

  // field types and members
  using _platform_id_type =
    int32_t;
  _platform_id_type platform_id;
  using _is_leader_type =
    bool;
  _is_leader_type is_leader;
  using _request_type_type =
    unsigned char;
  _request_type_type request_type;
  using _group_idx_type =
    int32_t;
  _group_idx_type group_idx;

  // setters for named parameter idiom
  Type & set__platform_id(
    const int32_t & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }
  Type & set__is_leader(
    const bool & _arg)
  {
    this->is_leader = _arg;
    return *this;
  }
  Type & set__request_type(
    const unsigned char & _arg)
  {
    this->request_type = _arg;
    return *this;
  }
  Type & set__group_idx(
    const int32_t & _arg)
  {
    this->group_idx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    use_case_one::srv::Grouping_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const use_case_one::srv::Grouping_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      use_case_one::srv::Grouping_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      use_case_one::srv::Grouping_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__use_case_one__srv__Grouping_Request
    std::shared_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__use_case_one__srv__Grouping_Request
    std::shared_ptr<use_case_one::srv::Grouping_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grouping_Request_ & other) const
  {
    if (this->platform_id != other.platform_id) {
      return false;
    }
    if (this->is_leader != other.is_leader) {
      return false;
    }
    if (this->request_type != other.request_type) {
      return false;
    }
    if (this->group_idx != other.group_idx) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grouping_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grouping_Request_

// alias to use template instance with default allocator
using Grouping_Request =
  use_case_one::srv::Grouping_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace use_case_one


#ifndef _WIN32
# define DEPRECATED__use_case_one__srv__Grouping_Response __attribute__((deprecated))
#else
# define DEPRECATED__use_case_one__srv__Grouping_Response __declspec(deprecated)
#endif

namespace use_case_one
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Grouping_Response_
{
  using Type = Grouping_Response_<ContainerAllocator>;

  explicit Grouping_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0l;
      this->is_leader = false;
      this->reply_type = 0;
      this->group_idx = 0l;
    }
  }

  explicit Grouping_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = 0l;
      this->is_leader = false;
      this->reply_type = 0;
      this->group_idx = 0l;
    }
  }

  // field types and members
  using _platform_id_type =
    int32_t;
  _platform_id_type platform_id;
  using _is_leader_type =
    bool;
  _is_leader_type is_leader;
  using _reply_type_type =
    unsigned char;
  _reply_type_type reply_type;
  using _group_idx_type =
    int32_t;
  _group_idx_type group_idx;

  // setters for named parameter idiom
  Type & set__platform_id(
    const int32_t & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }
  Type & set__is_leader(
    const bool & _arg)
  {
    this->is_leader = _arg;
    return *this;
  }
  Type & set__reply_type(
    const unsigned char & _arg)
  {
    this->reply_type = _arg;
    return *this;
  }
  Type & set__group_idx(
    const int32_t & _arg)
  {
    this->group_idx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    use_case_one::srv::Grouping_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const use_case_one::srv::Grouping_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      use_case_one::srv::Grouping_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      use_case_one::srv::Grouping_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__use_case_one__srv__Grouping_Response
    std::shared_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__use_case_one__srv__Grouping_Response
    std::shared_ptr<use_case_one::srv::Grouping_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grouping_Response_ & other) const
  {
    if (this->platform_id != other.platform_id) {
      return false;
    }
    if (this->is_leader != other.is_leader) {
      return false;
    }
    if (this->reply_type != other.reply_type) {
      return false;
    }
    if (this->group_idx != other.group_idx) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grouping_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grouping_Response_

// alias to use template instance with default allocator
using Grouping_Response =
  use_case_one::srv::Grouping_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace use_case_one

namespace use_case_one
{

namespace srv
{

struct Grouping
{
  using Request = use_case_one::srv::Grouping_Request;
  using Response = use_case_one::srv::Grouping_Response;
};

}  // namespace srv

}  // namespace use_case_one

#endif  // USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_HPP_
