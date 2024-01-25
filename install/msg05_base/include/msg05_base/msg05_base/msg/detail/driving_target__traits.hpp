// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/driving_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "msg05_base/msg/detail/driving_pose__traits.hpp"
// Member 'linear'
// Member 'angular'
#include "msg05_base/msg/detail/vector3_f32__traits.hpp"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: linear
  {
    out << "linear: ";
    to_flow_style_yaml(msg.linear, out);
    out << ", ";
  }

  // member: angular
  {
    out << "angular: ";
    to_flow_style_yaml(msg.angular, out);
    out << ", ";
  }

  // member: formation
  {
    if (msg.formation.size() == 0) {
      out << "formation: []";
    } else {
      out << "formation: [";
      size_t pending_items = msg.formation.size();
      for (auto item : msg.formation) {
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
  const DrivingTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear:\n";
    to_block_style_yaml(msg.linear, out, indentation + 2);
  }

  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular:\n";
    to_block_style_yaml(msg.angular, out, indentation + 2);
  }

  // member: formation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.formation.size() == 0) {
      out << "formation: []\n";
    } else {
      out << "formation:\n";
      for (auto item : msg.formation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingTarget & msg, bool use_flow_style = false)
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
  const msg05_base::msg::DrivingTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::DrivingTarget & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::DrivingTarget>()
{
  return "msg05_base::msg::DrivingTarget";
}

template<>
inline const char * name<msg05_base::msg::DrivingTarget>()
{
  return "msg05_base/msg/DrivingTarget";
}

template<>
struct has_fixed_size<msg05_base::msg::DrivingTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::DrivingTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::DrivingTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__TRAITS_HPP_
