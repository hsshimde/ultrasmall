// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ERROR__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Error_error
{
public:
  Init_Error_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::msg::Error error(::msg05_base::msg::Error::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Error>()
{
  return msg05_base::msg::builder::Init_Error_error();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__ERROR__BUILDER_HPP_
