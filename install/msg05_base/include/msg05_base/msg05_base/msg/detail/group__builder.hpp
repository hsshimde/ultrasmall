// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Group.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Group_registrations
{
public:
  explicit Init_Group_registrations(::msg05_base::msg::Group & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Group registrations(::msg05_base::msg::Group::_registrations_type arg)
  {
    msg_.registrations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Group msg_;
};

class Init_Group_leader_id
{
public:
  explicit Init_Group_leader_id(::msg05_base::msg::Group & msg)
  : msg_(msg)
  {}
  Init_Group_registrations leader_id(::msg05_base::msg::Group::_leader_id_type arg)
  {
    msg_.leader_id = std::move(arg);
    return Init_Group_registrations(msg_);
  }

private:
  ::msg05_base::msg::Group msg_;
};

class Init_Group_group_id
{
public:
  Init_Group_group_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Group_leader_id group_id(::msg05_base::msg::Group::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_Group_leader_id(msg_);
  }

private:
  ::msg05_base::msg::Group msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Group>()
{
  return msg05_base::msg::builder::Init_Group_group_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__GROUP__BUILDER_HPP_
