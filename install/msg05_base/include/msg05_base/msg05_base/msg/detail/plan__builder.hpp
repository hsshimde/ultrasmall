// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLAN__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_Plan_formation
{
public:
  explicit Init_Plan_formation(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::Plan formation(::msg05_base::msg::Plan::_formation_type arg)
  {
    msg_.formation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_targets
{
public:
  explicit Init_Plan_targets(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  Init_Plan_formation targets(::msg05_base::msg::Plan::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_Plan_formation(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_mission_sub_area
{
public:
  explicit Init_Plan_mission_sub_area(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  Init_Plan_targets mission_sub_area(::msg05_base::msg::Plan::_mission_sub_area_type arg)
  {
    msg_.mission_sub_area = std::move(arg);
    return Init_Plan_targets(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_mission_area
{
public:
  explicit Init_Plan_mission_area(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  Init_Plan_mission_sub_area mission_area(::msg05_base::msg::Plan::_mission_area_type arg)
  {
    msg_.mission_area = std::move(arg);
    return Init_Plan_mission_sub_area(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_task
{
public:
  explicit Init_Plan_task(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  Init_Plan_mission_area task(::msg05_base::msg::Plan::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_Plan_mission_area(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_mission
{
public:
  explicit Init_Plan_mission(::msg05_base::msg::Plan & msg)
  : msg_(msg)
  {}
  Init_Plan_task mission(::msg05_base::msg::Plan::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return Init_Plan_task(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

class Init_Plan_groups
{
public:
  Init_Plan_groups()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Plan_mission groups(::msg05_base::msg::Plan::_groups_type arg)
  {
    msg_.groups = std::move(arg);
    return Init_Plan_mission(msg_);
  }

private:
  ::msg05_base::msg::Plan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::Plan>()
{
  return msg05_base::msg::builder::Init_Plan_groups();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__PLAN__BUILDER_HPP_
