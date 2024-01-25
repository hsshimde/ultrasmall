// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/DrivingPose.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_POSE__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__DRIVING_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/driving_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__traits.hpp"
// Member 'orientation'
#include "msg05_base/msg/detail/vector4_f32__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingPose & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingPose & msg, bool use_flow_style = false)
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
  const msg05_base::msg::DrivingPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::DrivingPose & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::DrivingPose>()
{
  return "msg05_base::msg::DrivingPose";
}

template<>
inline const char * name<msg05_base::msg::DrivingPose>()
{
  return "msg05_base/msg/DrivingPose";
}

template<>
struct has_fixed_size<msg05_base::msg::DrivingPose>
  : std::integral_constant<bool, has_fixed_size<msg05_base::msg::Vector3I16>::value && has_fixed_size<msg05_base::msg::Vector4F32>::value> {};

template<>
struct has_bounded_size<msg05_base::msg::DrivingPose>
  : std::integral_constant<bool, has_bounded_size<msg05_base::msg::Vector3I16>::value && has_bounded_size<msg05_base::msg::Vector4F32>::value> {};

template<>
struct is_message<msg05_base::msg::DrivingPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_POSE__TRAITS_HPP_
