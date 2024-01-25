// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/mission_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_MissionResult_error
{
public:
  explicit Init_MissionResult_error(::msg05_base::msg::MissionResult & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::MissionResult error(::msg05_base::msg::MissionResult::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::MissionResult msg_;
};

class Init_MissionResult_mission_status
{
public:
  explicit Init_MissionResult_mission_status(::msg05_base::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_error mission_status(::msg05_base::msg::MissionResult::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return Init_MissionResult_error(msg_);
  }

private:
  ::msg05_base::msg::MissionResult msg_;
};

class Init_MissionResult_id
{
public:
  Init_MissionResult_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionResult_mission_status id(::msg05_base::msg::MissionResult::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MissionResult_mission_status(msg_);
  }

private:
  ::msg05_base::msg::MissionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::MissionResult>()
{
  return msg05_base::msg::builder::Init_MissionResult_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_
