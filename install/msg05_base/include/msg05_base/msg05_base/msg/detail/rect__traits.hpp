// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/Rect.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__RECT__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__RECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/rect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'end'
#include "msg05_base/msg/detail/point_i16__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rect & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rect & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rect & msg, bool use_flow_style = false)
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
  const msg05_base::msg::Rect & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::Rect & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::Rect>()
{
  return "msg05_base::msg::Rect";
}

template<>
inline const char * name<msg05_base::msg::Rect>()
{
  return "msg05_base/msg/Rect";
}

template<>
struct has_fixed_size<msg05_base::msg::Rect>
  : std::integral_constant<bool, has_fixed_size<msg05_base::msg::PointI16>::value> {};

template<>
struct has_bounded_size<msg05_base::msg::Rect>
  : std::integral_constant<bool, has_bounded_size<msg05_base::msg::PointI16>::value> {};

template<>
struct is_message<msg05_base::msg::Rect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__RECT__TRAITS_HPP_
