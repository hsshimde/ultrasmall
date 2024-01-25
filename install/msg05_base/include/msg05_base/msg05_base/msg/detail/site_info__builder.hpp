// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/SiteInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SITE_INFO__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__SITE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/site_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_SiteInfo_points
{
public:
  Init_SiteInfo_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::msg::SiteInfo points(::msg05_base::msg::SiteInfo::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::SiteInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::SiteInfo>()
{
  return msg05_base::msg::builder::Init_SiteInfo_points();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SITE_INFO__BUILDER_HPP_
