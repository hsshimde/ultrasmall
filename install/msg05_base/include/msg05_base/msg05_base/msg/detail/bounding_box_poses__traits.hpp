// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/bounding_box_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/bounding_box_pos__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBoxPoses & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: header_time
  {
    out << "header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.header_time, out);
    out << ", ";
  }

  // member: image_header_time
  {
    out << "image_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.image_header_time, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const BoundingBoxPoses & msg,
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

  // member: header_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.header_time, out);
    out << "\n";
  }

  // member: image_header_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.image_header_time, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxPoses & msg, bool use_flow_style = false)
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
  const msg05_base::msg::BoundingBoxPoses & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::BoundingBoxPoses & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::BoundingBoxPoses>()
{
  return "msg05_base::msg::BoundingBoxPoses";
}

template<>
inline const char * name<msg05_base::msg::BoundingBoxPoses>()
{
  return "msg05_base/msg/BoundingBoxPoses";
}

template<>
struct has_fixed_size<msg05_base::msg::BoundingBoxPoses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::BoundingBoxPoses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::BoundingBoxPoses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__TRAITS_HPP_
