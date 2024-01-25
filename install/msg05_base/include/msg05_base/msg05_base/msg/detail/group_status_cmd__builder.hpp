// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/GroupStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/group_status_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_GroupStatusCmd_task
{
public:
  explicit Init_GroupStatusCmd_task(::msg05_base::msg::GroupStatusCmd & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::GroupStatusCmd task(::msg05_base::msg::GroupStatusCmd::_task_type arg)
  {
    msg_.task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::GroupStatusCmd msg_;
};

class Init_GroupStatusCmd_mission_status
{
public:
  explicit Init_GroupStatusCmd_mission_status(::msg05_base::msg::GroupStatusCmd & msg)
  : msg_(msg)
  {}
  Init_GroupStatusCmd_task mission_status(::msg05_base::msg::GroupStatusCmd::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return Init_GroupStatusCmd_task(msg_);
  }

private:
  ::msg05_base::msg::GroupStatusCmd msg_;
};

class Init_GroupStatusCmd_group_id
{
public:
  Init_GroupStatusCmd_group_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupStatusCmd_mission_status group_id(::msg05_base::msg::GroupStatusCmd::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_GroupStatusCmd_mission_status(msg_);
  }

private:
  ::msg05_base::msg::GroupStatusCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::GroupStatusCmd>()
{
  return msg05_base::msg::builder::Init_GroupStatusCmd_group_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__BUILDER_HPP_
