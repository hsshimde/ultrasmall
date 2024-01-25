// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/GroupStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/group_status_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupStatusCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_id
  {
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << ", ";
  }

  // member: mission_status
  {
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << ", ";
  }

  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupStatusCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << "\n";
  }

  // member: mission_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << "\n";
  }

  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupStatusCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg05_base

namespace rosidl_generator_traits
{

[[deprecated("use msg05_base::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg05_base::msg::GroupStatusCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::GroupStatusCmd & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::GroupStatusCmd>()
{
  return "msg05_base::msg::GroupStatusCmd";
}

template<>
inline const char * name<msg05_base::msg::GroupStatusCmd>()
{
  return "msg05_base/msg/GroupStatusCmd";
}

template<>
struct has_fixed_size<msg05_base::msg::GroupStatusCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg05_base::msg::GroupStatusCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg05_base::msg::GroupStatusCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__TRAITS_HPP_
