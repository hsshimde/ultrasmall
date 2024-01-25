// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/Vector4F32.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__VECTOR4_F32__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__VECTOR4_F32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/vector4_f32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vector4F32 & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vector4F32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vector4F32 & msg, bool use_flow_style = false)
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
  const msg05_base::msg::Vector4F32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::Vector4F32 & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::Vector4F32>()
{
  return "msg05_base::msg::Vector4F32";
}

template<>
inline const char * name<msg05_base::msg::Vector4F32>()
{
  return "msg05_base/msg/Vector4F32";
}

template<>
struct has_fixed_size<msg05_base::msg::Vector4F32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg05_base::msg::Vector4F32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg05_base::msg::Vector4F32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__VECTOR4_F32__TRAITS_HPP_
