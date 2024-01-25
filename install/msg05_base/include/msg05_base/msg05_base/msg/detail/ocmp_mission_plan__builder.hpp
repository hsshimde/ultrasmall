// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/OCMPMissionPlan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/ocmp_mission_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_OCMPMissionPlan_mission_area
{
public:
  explicit Init_OCMPMissionPlan_mission_area(::msg05_base::msg::OCMPMissionPlan & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::OCMPMissionPlan mission_area(::msg05_base::msg::OCMPMissionPlan::_mission_area_type arg)
  {
    msg_.mission_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::OCMPMissionPlan msg_;
};

class Init_OCMPMissionPlan_mission_name
{
public:
  Init_OCMPMissionPlan_mission_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OCMPMissionPlan_mission_area mission_name(::msg05_base::msg::OCMPMissionPlan::_mission_name_type arg)
  {
    msg_.mission_name = std::move(arg);
    return Init_OCMPMissionPlan_mission_area(msg_);
  }

private:
  ::msg05_base::msg::OCMPMissionPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::OCMPMissionPlan>()
{
  return msg05_base::msg::builder::Init_OCMPMissionPlan_mission_name();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__BUILDER_HPP_
