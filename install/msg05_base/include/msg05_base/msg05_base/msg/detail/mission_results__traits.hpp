// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/MissionResults.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/mission_results__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/mission_result__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionResults & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionResults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionResults & msg, bool use_flow_style = false)
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
  const msg05_base::msg::MissionResults & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::MissionResults & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::MissionResults>()
{
  return "msg05_base::msg::MissionResults";
}

template<>
inline const char * name<msg05_base::msg::MissionResults>()
{
  return "msg05_base/msg/MissionResults";
}

template<>
struct has_fixed_size<msg05_base::msg::MissionResults>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::MissionResults>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::MissionResults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__TRAITS_HPP_
