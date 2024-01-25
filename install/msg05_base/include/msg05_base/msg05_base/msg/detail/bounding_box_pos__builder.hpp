// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/BoundingBoxPos.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/bounding_box_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxPos_time
{
public:
  explicit Init_BoundingBoxPos_time(::msg05_base::msg::BoundingBoxPos & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::BoundingBoxPos time(::msg05_base::msg::BoundingBoxPos::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPos msg_;
};

class Init_BoundingBoxPos_class_id
{
public:
  explicit Init_BoundingBoxPos_class_id(::msg05_base::msg::BoundingBoxPos & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxPos_time class_id(::msg05_base::msg::BoundingBoxPos::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_BoundingBoxPos_time(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPos msg_;
};

class Init_BoundingBoxPos_position
{
public:
  explicit Init_BoundingBoxPos_position(::msg05_base::msg::BoundingBoxPos & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxPos_class_id position(::msg05_base::msg::BoundingBoxPos::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_BoundingBoxPos_class_id(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPos msg_;
};

class Init_BoundingBoxPos_bbox
{
public:
  explicit Init_BoundingBoxPos_bbox(::msg05_base::msg::BoundingBoxPos & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxPos_position bbox(::msg05_base::msg::BoundingBoxPos::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_BoundingBoxPos_position(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPos msg_;
};

class Init_BoundingBoxPos_probability_percent
{
public:
  Init_BoundingBoxPos_probability_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxPos_bbox probability_percent(::msg05_base::msg::BoundingBoxPos::_probability_percent_type arg)
  {
    msg_.probability_percent = std::move(arg);
    return Init_BoundingBoxPos_bbox(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::BoundingBoxPos>()
{
  return msg05_base::msg::builder::Init_BoundingBoxPos_probability_percent();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__BUILDER_HPP_
