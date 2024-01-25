// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Image_data
{
public:
  explicit Init_Image_data(::msg05_base::msg::Image & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Image data(::msg05_base::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Image msg_;
};

class Init_Image_timestamp
{
public:
  explicit Init_Image_timestamp(::msg05_base::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_data timestamp(::msg05_base::msg::Image::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Image_data(msg_);
  }

private:
  ::msg05_base::msg::Image msg_;
};

class Init_Image_id
{
public:
  Init_Image_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_timestamp id(::msg05_base::msg::Image::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Image_timestamp(msg_);
  }

private:
  ::msg05_base::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Image>()
{
  return msg05_base::msg::builder::Init_Image_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__IMAGE__BUILDER_HPP_
