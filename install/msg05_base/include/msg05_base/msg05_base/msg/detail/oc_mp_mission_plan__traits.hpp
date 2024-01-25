// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/OcMpMissionPlan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__OC_MP_MISSION_PLAN__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__OC_MP_MISSION_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/oc_mp_mission_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mission_area'
#include "msg05_base/msg/detail/rect__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const OcMpMissionPlan & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_name
  {
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << ", ";
  }

  // member: mission_area
  {
    out << "mission_area: ";
    to_flow_style_yaml(msg.mission_area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OcMpMissionPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << "\n";
  }

  // member: mission_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_area:\n";
    to_block_style_yaml(msg.mission_area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OcMpMissionPlan & msg, bool use_flow_style = false)
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
  const msg05_base::msg::OcMpMissionPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::OcMpMissionPlan & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::OcMpMissionPlan>()
{
  return "msg05_base::msg::OcMpMissionPlan";
}

template<>
inline const char * name<msg05_base::msg::OcMpMissionPlan>()
{
  return "msg05_base/msg/OcMpMissionPlan";
}

template<>
struct has_fixed_size<msg05_base::msg::OcMpMissionPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::OcMpMissionPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::OcMpMissionPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__OC_MP_MISSION_PLAN__TRAITS_HPP_
