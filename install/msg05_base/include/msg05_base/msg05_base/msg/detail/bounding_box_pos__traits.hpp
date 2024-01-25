// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/BoundingBoxPos.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/bounding_box_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bbox'
#include "msg05_base/msg/detail/rect__traits.hpp"
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBoxPos & msg,
  std::ostream & out)
{
  out << "{";
  // member: probability_percent
  {
    out << "probability_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.probability_percent, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBoxPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: probability_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.probability_percent, out);
    out << "\n";
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxPos & msg, bool use_flow_style = false)
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
  const msg05_base::msg::BoundingBoxPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::BoundingBoxPos & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::BoundingBoxPos>()
{
  return "msg05_base::msg::BoundingBoxPos";
}

template<>
inline const char * name<msg05_base::msg::BoundingBoxPos>()
{
  return "msg05_base/msg/BoundingBoxPos";
}

template<>
struct has_fixed_size<msg05_base::msg::BoundingBoxPos>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::BoundingBoxPos>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::BoundingBoxPos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__TRAITS_HPP_
