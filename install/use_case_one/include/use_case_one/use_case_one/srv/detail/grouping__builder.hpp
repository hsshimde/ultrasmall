// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice

#ifndef USE_CASE_ONE__SRV__DETAIL__GROUPING__BUILDER_HPP_
#define USE_CASE_ONE__SRV__DETAIL__GROUPING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "use_case_one/srv/detail/grouping__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace use_case_one
{

namespace srv
{

namespace builder
{

class Init_Grouping_Request_group_idx
{
public:
  explicit Init_Grouping_Request_group_idx(::use_case_one::srv::Grouping_Request & msg)
  : msg_(msg)
  {}
  ::use_case_one::srv::Grouping_Request group_idx(::use_case_one::srv::Grouping_Request::_group_idx_type arg)
  {
    msg_.group_idx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Request msg_;
};

class Init_Grouping_Request_request_type
{
public:
  explicit Init_Grouping_Request_request_type(::use_case_one::srv::Grouping_Request & msg)
  : msg_(msg)
  {}
  Init_Grouping_Request_group_idx request_type(::use_case_one::srv::Grouping_Request::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_Grouping_Request_group_idx(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Request msg_;
};

class Init_Grouping_Request_is_leader
{
public:
  explicit Init_Grouping_Request_is_leader(::use_case_one::srv::Grouping_Request & msg)
  : msg_(msg)
  {}
  Init_Grouping_Request_request_type is_leader(::use_case_one::srv::Grouping_Request::_is_leader_type arg)
  {
    msg_.is_leader = std::move(arg);
    return Init_Grouping_Request_request_type(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Request msg_;
};

class Init_Grouping_Request_platform_id
{
public:
  Init_Grouping_Request_platform_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grouping_Request_is_leader platform_id(::use_case_one::srv::Grouping_Request::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return Init_Grouping_Request_is_leader(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::use_case_one::srv::Grouping_Request>()
{
  return use_case_one::srv::builder::Init_Grouping_Request_platform_id();
}

}  // namespace use_case_one


namespace use_case_one
{

namespace srv
{

namespace builder
{

class Init_Grouping_Response_group_idx
{
public:
  explicit Init_Grouping_Response_group_idx(::use_case_one::srv::Grouping_Response & msg)
  : msg_(msg)
  {}
  ::use_case_one::srv::Grouping_Response group_idx(::use_case_one::srv::Grouping_Response::_group_idx_type arg)
  {
    msg_.group_idx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Response msg_;
};

class Init_Grouping_Response_reply_type
{
public:
  explicit Init_Grouping_Response_reply_type(::use_case_one::srv::Grouping_Response & msg)
  : msg_(msg)
  {}
  Init_Grouping_Response_group_idx reply_type(::use_case_one::srv::Grouping_Response::_reply_type_type arg)
  {
    msg_.reply_type = std::move(arg);
    return Init_Grouping_Response_group_idx(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Response msg_;
};

class Init_Grouping_Response_is_leader
{
public:
  explicit Init_Grouping_Response_is_leader(::use_case_one::srv::Grouping_Response & msg)
  : msg_(msg)
  {}
  Init_Grouping_Response_reply_type is_leader(::use_case_one::srv::Grouping_Response::_is_leader_type arg)
  {
    msg_.is_leader = std::move(arg);
    return Init_Grouping_Response_reply_type(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Response msg_;
};

class Init_Grouping_Response_platform_id
{
public:
  Init_Grouping_Response_platform_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grouping_Response_is_leader platform_id(::use_case_one::srv::Grouping_Response::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return Init_Grouping_Response_is_leader(msg_);
  }

private:
  ::use_case_one::srv::Grouping_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::use_case_one::srv::Grouping_Response>()
{
  return use_case_one::srv::builder::Init_Grouping_Response_platform_id();
}

}  // namespace use_case_one

#endif  // USE_CASE_ONE__SRV__DETAIL__GROUPING__BUILDER_HPP_
