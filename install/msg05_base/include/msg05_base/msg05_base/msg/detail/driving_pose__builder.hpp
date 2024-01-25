// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/DrivingPose.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_POSE__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/driving_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_DrivingPose_orientation
{
public:
  explicit Init_DrivingPose_orientation(::msg05_base::msg::DrivingPose & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::DrivingPose orientation(::msg05_base::msg::DrivingPose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::DrivingPose msg_;
};

class Init_DrivingPose_position
{
public:
  explicit Init_DrivingPose_position(::msg05_base::msg::DrivingPose & msg)
  : msg_(msg)
  {}
  Init_DrivingPose_orientation position(::msg05_base::msg::DrivingPose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_DrivingPose_orientation(msg_);
  }

private:
  ::msg05_base::msg::DrivingPose msg_;
};

class Init_DrivingPose_timestamp
{
public:
  explicit Init_DrivingPose_timestamp(::msg05_base::msg::DrivingPose & msg)
  : msg_(msg)
  {}
  Init_DrivingPose_position timestamp(::msg05_base::msg::DrivingPose::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DrivingPose_position(msg_);
  }

private:
  ::msg05_base::msg::DrivingPose msg_;
};

class Init_DrivingPose_id
{
public:
  Init_DrivingPose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingPose_timestamp id(::msg05_base::msg::DrivingPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DrivingPose_timestamp(msg_);
  }

private:
  ::msg05_base::msg::DrivingPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::DrivingPose>()
{
  return msg05_base::msg::builder::Init_DrivingPose_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_POSE__BUILDER_HPP_
