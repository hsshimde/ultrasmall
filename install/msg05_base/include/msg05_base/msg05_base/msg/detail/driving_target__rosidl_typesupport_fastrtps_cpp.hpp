// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg05_base/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg05_base/msg/detail/driving_target__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace msg05_base
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg05_base
cdr_serialize(
  const msg05_base::msg::DrivingTarget & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg05_base
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg05_base::msg::DrivingTarget & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg05_base
get_serialized_size(
  const msg05_base::msg::DrivingTarget & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg05_base
max_serialized_size_DrivingTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg05_base

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg05_base
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg05_base, msg, DrivingTarget)();

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
