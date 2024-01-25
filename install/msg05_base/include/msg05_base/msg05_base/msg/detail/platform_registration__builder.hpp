// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/PlatformRegistration.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/platform_registration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_PlatformRegistration_platform_type
{
public:
  explicit Init_PlatformRegistration_platform_type(::msg05_base::msg::PlatformRegistration & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::PlatformRegistration platform_type(::msg05_base::msg::PlatformRegistration::_platform_type_type arg)
  {
    msg_.platform_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::PlatformRegistration msg_;
};

class Init_PlatformRegistration_ip
{
public:
  explicit Init_PlatformRegistration_ip(::msg05_base::msg::PlatformRegistration & msg)
  : msg_(msg)
  {}
  Init_PlatformRegistration_platform_type ip(::msg05_base::msg::PlatformRegistration::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_PlatformRegistration_platform_type(msg_);
  }

private:
  ::msg05_base::msg::PlatformRegistration msg_;
};

class Init_PlatformRegistration_id
{
public:
  Init_PlatformRegistration_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatformRegistration_ip id(::msg05_base::msg::PlatformRegistration::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PlatformRegistration_ip(msg_);
  }

private:
  ::msg05_base::msg::PlatformRegistration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::PlatformRegistration>()
{
  return msg05_base::msg::builder::Init_PlatformRegistration_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__BUILDER_HPP_
