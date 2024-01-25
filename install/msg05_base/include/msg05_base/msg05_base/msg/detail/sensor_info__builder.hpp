// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg05_base:msg/SensorInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_
#define MSG05_BASE__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg05_base/msg/detail/sensor_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg05_base
{

namespace msg
{

namespace builder
{

class Init_SensorInfo_driving
{
public:
  explicit Init_SensorInfo_driving(::msg05_base::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  ::msg05_base::msg::SensorInfo driving(::msg05_base::msg::SensorInfo::_driving_type arg)
  {
    msg_.driving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg05_base::msg::SensorInfo msg_;
};

class Init_SensorInfo_bbox
{
public:
  explicit Init_SensorInfo_bbox(::msg05_base::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  Init_SensorInfo_driving bbox(::msg05_base::msg::SensorInfo::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_SensorInfo_driving(msg_);
  }

private:
  ::msg05_base::msg::SensorInfo msg_;
};

class Init_SensorInfo_state
{
public:
  explicit Init_SensorInfo_state(::msg05_base::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  Init_SensorInfo_bbox state(::msg05_base::msg::SensorInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SensorInfo_bbox(msg_);
  }

private:
  ::msg05_base::msg::SensorInfo msg_;
};

class Init_SensorInfo_id
{
public:
  Init_SensorInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorInfo_state id(::msg05_base::msg::SensorInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SensorInfo_state(msg_);
  }

private:
  ::msg05_base::msg::SensorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg05_base::msg::SensorInfo>()
{
  return msg05_base::msg::builder::Init_SensorInfo_id();
}

}  // namespace msg05_base

#endif  // MSG05_BASE__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_
