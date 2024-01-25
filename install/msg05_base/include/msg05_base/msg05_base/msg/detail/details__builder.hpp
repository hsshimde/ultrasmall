// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Details.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DETAILS__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Details_speed
{
public:
  explicit Init_Details_speed(::msg05_base::msg::Details & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Details speed(::msg05_base::msg::Details::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Details msg_;
};

class Init_Details_action_type
{
public:
  explicit Init_Details_action_type(::msg05_base::msg::Details & msg)
  : msg_(msg)
  {}
  Init_Details_speed action_type(::msg05_base::msg::Details::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_Details_speed(msg_);
  }

private:
  ::msg05_base::msg::Details msg_;
};

class Init_Details_mission_status
{
public:
  explicit Init_Details_mission_status(::msg05_base::msg::Details & msg)
  : msg_(msg)
  {}
  Init_Details_action_type mission_status(::msg05_base::msg::Details::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return Init_Details_action_type(msg_);
  }

private:
  ::msg05_base::msg::Details msg_;
};

class Init_Details_mission_type
{
public:
  explicit Init_Details_mission_type(::msg05_base::msg::Details & msg)
  : msg_(msg)
  {}
  Init_Details_mission_status mission_type(::msg05_base::msg::Details::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return Init_Details_mission_status(msg_);
  }

private:
  ::msg05_base::msg::Details msg_;
};

class Init_Details_task
{
public:
  Init_Details_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Details_mission_type task(::msg05_base::msg::Details::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_Details_mission_type(msg_);
  }

private:
  ::msg05_base::msg::Details msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Details>()
{
  return msg05_base::msg::builder::Init_Details_task();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__DETAILS__BUILDER_HPP_
