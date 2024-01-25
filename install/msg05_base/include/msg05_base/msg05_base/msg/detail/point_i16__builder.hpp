// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/PointI16.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__POINT_I16__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__POINT_I16__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/point_i16__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_PointI16_y
{
public:
  explicit Init_PointI16_y(::msg05_base::msg::PointI16 & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::PointI16 y(::msg05_base::msg::PointI16::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::PointI16 msg_;
};

class Init_PointI16_x
{
public:
  Init_PointI16_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointI16_y x(::msg05_base::msg::PointI16::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointI16_y(msg_);
  }

private:
  ::msg05_base::msg::PointI16 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::PointI16>()
{
  return msg05_base::msg::builder::Init_PointI16_x();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__POINT_I16__BUILDER_HPP_
