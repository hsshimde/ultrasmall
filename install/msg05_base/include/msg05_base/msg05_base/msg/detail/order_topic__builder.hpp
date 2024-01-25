// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/OrderTopic.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/order_topic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_OrderTopic_oc_mp_cmd
{
public:
  Init_OrderTopic_oc_mp_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::msg::OrderTopic oc_mp_cmd(::msg05_base::msg::OrderTopic::_oc_mp_cmd_type arg)
  {
    msg_.oc_mp_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::OrderTopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::OrderTopic>()
{
  return msg05_base::msg::builder::Init_OrderTopic_oc_mp_cmd();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__BUILDER_HPP_
