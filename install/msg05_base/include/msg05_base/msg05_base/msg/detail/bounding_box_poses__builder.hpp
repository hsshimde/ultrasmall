// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/bounding_box_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxPoses_data
{
public:
  explicit Init_BoundingBoxPoses_data(::msg05_base::msg::BoundingBoxPoses & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::BoundingBoxPoses data(::msg05_base::msg::BoundingBoxPoses::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPoses msg_;
};

class Init_BoundingBoxPoses_image_header_time
{
public:
  explicit Init_BoundingBoxPoses_image_header_time(::msg05_base::msg::BoundingBoxPoses & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxPoses_data image_header_time(::msg05_base::msg::BoundingBoxPoses::_image_header_time_type arg)
  {
    msg_.image_header_time = std::move(arg);
    return Init_BoundingBoxPoses_data(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPoses msg_;
};

class Init_BoundingBoxPoses_header_time
{
public:
  explicit Init_BoundingBoxPoses_header_time(::msg05_base::msg::BoundingBoxPoses & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxPoses_image_header_time header_time(::msg05_base::msg::BoundingBoxPoses::_header_time_type arg)
  {
    msg_.header_time = std::move(arg);
    return Init_BoundingBoxPoses_image_header_time(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPoses msg_;
};

class Init_BoundingBoxPoses_id
{
public:
  Init_BoundingBoxPoses_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxPoses_header_time id(::msg05_base::msg::BoundingBoxPoses::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoundingBoxPoses_header_time(msg_);
  }

private:
  ::msg05_base::msg::BoundingBoxPoses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::BoundingBoxPoses>()
{
  return msg05_base::msg::builder::Init_BoundingBoxPoses_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__BUILDER_HPP_
