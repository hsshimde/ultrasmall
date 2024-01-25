// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:srv/PlatformRegistrationInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__BUILDER_HPP_
#define MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/srv/detail/platform_registration_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_PlatformRegistrationInfo_Request_registration
{
public:
  Init_PlatformRegistrationInfo_Request_registration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::PlatformRegistrationInfo_Request registration(::msg05_base::srv::PlatformRegistrationInfo_Request::_registration_type arg)
  {
    msg_.registration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::PlatformRegistrationInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::PlatformRegistrationInfo_Request>()
{
  return msg05_base::srv::builder::Init_PlatformRegistrationInfo_Request_registration();
}

}  // namespace msg05_base


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_PlatformRegistrationInfo_Response_result
{
public:
  Init_PlatformRegistrationInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::PlatformRegistrationInfo_Response result(::msg05_base::srv::PlatformRegistrationInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::PlatformRegistrationInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::PlatformRegistrationInfo_Response>()
{
  return msg05_base::srv::builder::Init_PlatformRegistrationInfo_Response_result();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__PLATFORM_REGISTRATION_INFO__BUILDER_HPP_
