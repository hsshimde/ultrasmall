// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/SwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/swarm_groups__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_SwarmGroups_platform_type
{
public:
  explicit Init_SwarmGroups_platform_type(::msg05_base::msg::SwarmGroups & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::SwarmGroups platform_type(::msg05_base::msg::SwarmGroups::_platform_type_type arg)
  {
    msg_.platform_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::SwarmGroups msg_;
};

class Init_SwarmGroups_leader_id
{
public:
  explicit Init_SwarmGroups_leader_id(::msg05_base::msg::SwarmGroups & msg)
  : msg_(msg)
  {}
  Init_SwarmGroups_platform_type leader_id(::msg05_base::msg::SwarmGroups::_leader_id_type arg)
  {
    msg_.leader_id = std::move(arg);
    return Init_SwarmGroups_platform_type(msg_);
  }

private:
  ::msg05_base::msg::SwarmGroups msg_;
};

class Init_SwarmGroups_group_id
{
public:
  explicit Init_SwarmGroups_group_id(::msg05_base::msg::SwarmGroups & msg)
  : msg_(msg)
  {}
  Init_SwarmGroups_leader_id group_id(::msg05_base::msg::SwarmGroups::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_SwarmGroups_leader_id(msg_);
  }

private:
  ::msg05_base::msg::SwarmGroups msg_;
};

class Init_SwarmGroups_platform_id
{
public:
  Init_SwarmGroups_platform_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwarmGroups_group_id platform_id(::msg05_base::msg::SwarmGroups::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return Init_SwarmGroups_group_id(msg_);
  }

private:
  ::msg05_base::msg::SwarmGroups msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::SwarmGroups>()
{
  return msg05_base::msg::builder::Init_SwarmGroups_platform_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__BUILDER_HPP_
