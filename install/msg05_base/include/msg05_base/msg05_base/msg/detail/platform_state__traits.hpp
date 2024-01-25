// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/platform_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'actuator_state'
// Member 'low_power_mode'
// Member 'network_connection'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlatformState & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform_id
  {
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << ", ";
  }

  // member: group_id
  {
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << ", ";
  }

  // member: actuator_state
  {
    out << "actuator_state: ";
    to_flow_style_yaml(msg.actuator_state, out);
    out << ", ";
  }

  // member: low_power_mode
  {
    out << "low_power_mode: ";
    to_flow_style_yaml(msg.low_power_mode, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: network_connection
  {
    out << "network_connection: ";
    to_flow_style_yaml(msg.network_connection, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlatformState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: platform_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << "\n";
  }

  // member: group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << "\n";
  }

  // member: actuator_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_state:\n";
    to_block_style_yaml(msg.actuator_state, out, indentation + 2);
  }

  // member: low_power_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_power_mode:\n";
    to_block_style_yaml(msg.low_power_mode, out, indentation + 2);
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: network_connection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network_connection:\n";
    to_block_style_yaml(msg.network_connection, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlatformState & msg, bool use_flow_style = false)
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
  const msg05_base::msg::PlatformState & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::PlatformState & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::PlatformState>()
{
  return "msg05_base::msg::PlatformState";
}

template<>
inline const char * name<msg05_base::msg::PlatformState>()
{
  return "msg05_base/msg/PlatformState";
}

template<>
struct has_fixed_size<msg05_base::msg::PlatformState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<msg05_base::msg::PlatformState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<msg05_base::msg::PlatformState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__TRAITS_HPP_
