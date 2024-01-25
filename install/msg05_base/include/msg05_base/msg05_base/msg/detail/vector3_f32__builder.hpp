// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Vector3F32.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__VECTOR3_F32__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__VECTOR3_F32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/vector3_f32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Vector3F32_z
{
public:
  explicit Init_Vector3F32_z(::msg05_base::msg::Vector3F32 & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Vector3F32 z(::msg05_base::msg::Vector3F32::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Vector3F32 msg_;
};

class Init_Vector3F32_y
{
public:
  explicit Init_Vector3F32_y(::msg05_base::msg::Vector3F32 & msg)
  : msg_(msg)
  {}
  Init_Vector3F32_z y(::msg05_base::msg::Vector3F32::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vector3F32_z(msg_);
  }

private:
  ::msg05_base::msg::Vector3F32 msg_;
};

class Init_Vector3F32_x
{
public:
  Init_Vector3F32_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3F32_y x(::msg05_base::msg::Vector3F32::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector3F32_y(msg_);
  }

private:
  ::msg05_base::msg::Vector3F32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Vector3F32>()
{
  return msg05_base::msg::builder::Init_Vector3F32_x();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__VECTOR3_F32__BUILDER_HPP_
