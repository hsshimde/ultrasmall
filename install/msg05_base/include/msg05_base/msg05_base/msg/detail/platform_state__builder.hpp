// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/platform_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_PlatformState_network_connection
{
public:
  explicit Init_PlatformState_network_connection(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::PlatformState network_connection(::msg05_base::msg::PlatformState::_network_connection_type arg)
  {
    msg_.network_connection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_timestamp
{
public:
  explicit Init_PlatformState_timestamp(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  Init_PlatformState_network_connection timestamp(::msg05_base::msg::PlatformState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PlatformState_network_connection(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_battery_percentage
{
public:
  explicit Init_PlatformState_battery_percentage(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  Init_PlatformState_timestamp battery_percentage(::msg05_base::msg::PlatformState::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_PlatformState_timestamp(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_low_power_mode
{
public:
  explicit Init_PlatformState_low_power_mode(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  Init_PlatformState_battery_percentage low_power_mode(::msg05_base::msg::PlatformState::_low_power_mode_type arg)
  {
    msg_.low_power_mode = std::move(arg);
    return Init_PlatformState_battery_percentage(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_actuator_state
{
public:
  explicit Init_PlatformState_actuator_state(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  Init_PlatformState_low_power_mode actuator_state(::msg05_base::msg::PlatformState::_actuator_state_type arg)
  {
    msg_.actuator_state = std::move(arg);
    return Init_PlatformState_low_power_mode(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_group_id
{
public:
  explicit Init_PlatformState_group_id(::msg05_base::msg::PlatformState & msg)
  : msg_(msg)
  {}
  Init_PlatformState_actuator_state group_id(::msg05_base::msg::PlatformState::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_PlatformState_actuator_state(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

class Init_PlatformState_platform_id
{
public:
  Init_PlatformState_platform_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatformState_group_id platform_id(::msg05_base::msg::PlatformState::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return Init_PlatformState_group_id(msg_);
  }

private:
  ::msg05_base::msg::PlatformState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::PlatformState>()
{
  return msg05_base::msg::builder::Init_PlatformState_platform_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__BUILDER_HPP_
