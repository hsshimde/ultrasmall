// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/PlatformResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/platform_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_PlatformResult_platform_id
{
public:
  explicit Init_PlatformResult_platform_id(::msg05_base::msg::PlatformResult & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::PlatformResult platform_id(::msg05_base::msg::PlatformResult::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::PlatformResult msg_;
};

class Init_PlatformResult_result
{
public:
  Init_PlatformResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatformResult_platform_id result(::msg05_base::msg::PlatformResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_PlatformResult_platform_id(msg_);
  }

private:
  ::msg05_base::msg::PlatformResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::PlatformResult>()
{
  return msg05_base::msg::builder::Init_PlatformResult_result();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__BUILDER_HPP_
