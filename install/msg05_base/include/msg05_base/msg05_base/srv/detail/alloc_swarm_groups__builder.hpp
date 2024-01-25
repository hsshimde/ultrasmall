// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:srv/AllocSwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__BUILDER_HPP_
#define MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/srv/detail/alloc_swarm_groups__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_AllocSwarmGroups_Request_swarmgroups
{
public:
  Init_AllocSwarmGroups_Request_swarmgroups()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::AllocSwarmGroups_Request swarmgroups(::msg05_base::srv::AllocSwarmGroups_Request::_swarmgroups_type arg)
  {
    msg_.swarmgroups = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::AllocSwarmGroups_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::AllocSwarmGroups_Request>()
{
  return msg05_base::srv::builder::Init_AllocSwarmGroups_Request_swarmgroups();
}

}  // namespace msg05_base


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_AllocSwarmGroups_Response_result
{
public:
  Init_AllocSwarmGroups_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::AllocSwarmGroups_Response result(::msg05_base::srv::AllocSwarmGroups_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::AllocSwarmGroups_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::AllocSwarmGroups_Response>()
{
  return msg05_base::srv::builder::Init_AllocSwarmGroups_Response_result();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__BUILDER_HPP_
