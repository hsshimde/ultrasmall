// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/AllocSwarmPlanResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/alloc_swarm_plan_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllocSwarmPlanResult & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllocSwarmPlanResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllocSwarmPlanResult & msg, bool use_flow_style = false)
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
  const msg05_base::msg::AllocSwarmPlanResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::AllocSwarmPlanResult & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::AllocSwarmPlanResult>()
{
  return "msg05_base::msg::AllocSwarmPlanResult";
}

template<>
inline const char * name<msg05_base::msg::AllocSwarmPlanResult>()
{
  return "msg05_base/msg/AllocSwarmPlanResult";
}

template<>
struct has_fixed_size<msg05_base::msg::AllocSwarmPlanResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg05_base::msg::AllocSwarmPlanResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg05_base::msg::AllocSwarmPlanResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__TRAITS_HPP_
