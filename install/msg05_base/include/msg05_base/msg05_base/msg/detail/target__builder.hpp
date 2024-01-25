// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__TARGET__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Target_theta
{
public:
  explicit Init_Target_theta(::msg05_base::msg::Target & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Target theta(::msg05_base::msg::Target::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Target msg_;
};

class Init_Target_position
{
public:
  explicit Init_Target_position(::msg05_base::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_theta position(::msg05_base::msg::Target::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Target_theta(msg_);
  }

private:
  ::msg05_base::msg::Target msg_;
};

class Init_Target_action
{
public:
  Init_Target_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_position action(::msg05_base::msg::Target::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Target_position(msg_);
  }

private:
  ::msg05_base::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Target>()
{
  return msg05_base::msg::builder::Init_Target_action();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__TARGET__BUILDER_HPP_
