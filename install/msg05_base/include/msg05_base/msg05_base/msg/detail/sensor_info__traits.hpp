// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/SensorInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/sensor_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "msg05_base/msg/detail/platform_state__traits.hpp"
// Member 'bbox'
#include "msg05_base/msg/detail/bounding_box_poses__traits.hpp"
// Member 'driving'
#include "msg05_base/msg/detail/driving_pose__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: driving
  {
    out << "driving: ";
    to_flow_style_yaml(msg.driving, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorInfo & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: driving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving:\n";
    to_block_style_yaml(msg.driving, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorInfo & msg, bool use_flow_style = false)
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
  const msg05_base::msg::SensorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::SensorInfo & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::SensorInfo>()
{
  return "msg05_base::msg::SensorInfo";
}

template<>
inline const char * name<msg05_base::msg::SensorInfo>()
{
  return "msg05_base/msg/SensorInfo";
}

template<>
struct has_fixed_size<msg05_base::msg::SensorInfo>
  : std::integral_constant<bool, has_fixed_size<msg05_base::msg::BoundingBoxPoses>::value && has_fixed_size<msg05_base::msg::DrivingPose>::value && has_fixed_size<msg05_base::msg::PlatformState>::value> {};

template<>
struct has_bounded_size<msg05_base::msg::SensorInfo>
  : std::integral_constant<bool, has_bounded_size<msg05_base::msg::BoundingBoxPoses>::value && has_bounded_size<msg05_base::msg::DrivingPose>::value && has_bounded_size<msg05_base::msg::PlatformState>::value> {};

template<>
struct is_message<msg05_base::msg::SensorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__SENSOR_INFO__TRAITS_HPP_
