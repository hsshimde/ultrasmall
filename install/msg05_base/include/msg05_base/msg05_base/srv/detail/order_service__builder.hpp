// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:srv/OrderService.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__BUILDER_HPP_
#define MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/srv/detail/order_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_OrderService_Request_cmd
{
public:
  Init_OrderService_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::OrderService_Request cmd(::msg05_base::srv::OrderService_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::OrderService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::OrderService_Request>()
{
  return msg05_base::srv::builder::Init_OrderService_Request_cmd();
}

}  // namespace msg05_base


namespace msg05_base
{

namespace srv
{

namespace builder
{

class Init_OrderService_Response_result
{
public:
  Init_OrderService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::srv::OrderService_Response result(::msg05_base::srv::OrderService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::srv::OrderService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::srv::OrderService_Response>()
{
  return msg05_base::srv::builder::Init_OrderService_Response_result();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__BUILDER_HPP_
