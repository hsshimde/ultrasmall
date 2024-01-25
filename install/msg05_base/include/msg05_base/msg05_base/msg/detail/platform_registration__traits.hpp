// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/PlatformRegistration.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/platform_registration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ip'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlatformRegistration & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: ip
  {
    out << "ip: ";
    to_flow_style_yaml(msg.ip, out);
    out << ", ";
  }

  // member: platform_type
  {
    out << "platform_type: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlatformRegistration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip:\n";
    to_block_style_yaml(msg.ip, out, indentation + 2);
  }

  // member: platform_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform_type: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlatformRegistration & msg, bool use_flow_style = false)
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
  const msg05_base::msg::PlatformRegistration & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::PlatformRegistration & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::PlatformRegistration>()
{
  return "msg05_base::msg::PlatformRegistration";
}

template<>
inline const char * name<msg05_base::msg::PlatformRegistration>()
{
  return "msg05_base/msg/PlatformRegistration";
}

template<>
struct has_fixed_size<msg05_base::msg::PlatformRegistration>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<msg05_base::msg::PlatformRegistration>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<msg05_base::msg::PlatformRegistration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__TRAITS_HPP_
