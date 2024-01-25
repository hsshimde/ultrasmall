// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/MissionResults.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/mission_results__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_MissionResults_data
{
public:
  Init_MissionResults_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg05_base::msg::MissionResults data(::msg05_base::msg::MissionResults::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::MissionResults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::MissionResults>()
{
  return msg05_base::msg::builder::Init_MissionResults_data();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__BUILDER_HPP_
