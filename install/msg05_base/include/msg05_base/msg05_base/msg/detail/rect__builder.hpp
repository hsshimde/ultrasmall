// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Rect.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__RECT__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__RECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/rect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Rect_end
{
public:
  explicit Init_Rect_end(::msg05_base::msg::Rect & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Rect end(::msg05_base::msg::Rect::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Rect msg_;
};

class Init_Rect_start
{
public:
  Init_Rect_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rect_end start(::msg05_base::msg::Rect::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_Rect_end(msg_);
  }

private:
  ::msg05_base::msg::Rect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Rect>()
{
  return msg05_base::msg::builder::Init_Rect_start();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__RECT__BUILDER_HPP_
