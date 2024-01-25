// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/driving_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_DrivingTarget_formation
{
public:
  explicit Init_DrivingTarget_formation(::msg05_base::msg::DrivingTarget & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::DrivingTarget formation(::msg05_base::msg::DrivingTarget::_formation_type arg)
  {
    msg_.formation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::DrivingTarget msg_;
};

class Init_DrivingTarget_angular
{
public:
  explicit Init_DrivingTarget_angular(::msg05_base::msg::DrivingTarget & msg)
  : msg_(msg)
  {}
  Init_DrivingTarget_formation angular(::msg05_base::msg::DrivingTarget::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return Init_DrivingTarget_formation(msg_);
  }

private:
  ::msg05_base::msg::DrivingTarget msg_;
};

class Init_DrivingTarget_linear
{
public:
  explicit Init_DrivingTarget_linear(::msg05_base::msg::DrivingTarget & msg)
  : msg_(msg)
  {}
  Init_DrivingTarget_angular linear(::msg05_base::msg::DrivingTarget::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_DrivingTarget_angular(msg_);
  }

private:
  ::msg05_base::msg::DrivingTarget msg_;
};

class Init_DrivingTarget_pose
{
public:
  Init_DrivingTarget_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingTarget_linear pose(::msg05_base::msg::DrivingTarget::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DrivingTarget_linear(msg_);
  }

private:
  ::msg05_base::msg::DrivingTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::DrivingTarget>()
{
  return msg05_base::msg::builder::Init_DrivingTarget_pose();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__BUILDER_HPP_
