// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/Group.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'registrations'
#include "msg05_base/msg/detail/platform_registration__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const Group & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_id
  {
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << ", ";
  }

  // member: leader_id
  {
    out << "leader_id: ";
    rosidl_generator_traits::value_to_yaml(msg.leader_id, out);
    out << ", ";
  }

  // member: registrations
  {
    if (msg.registrations.size() == 0) {
      out << "registrations: []";
    } else {
      out << "registrations: [";
      size_t pending_items = msg.registrations.size();
      for (auto item : msg.registrations) {
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
  const Group & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << "\n";
  }

  // member: leader_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leader_id: ";
    rosidl_generator_traits::value_to_yaml(msg.leader_id, out);
    out << "\n";
  }

  // member: registrations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.registrations.size() == 0) {
      out << "registrations: []\n";
    } else {
      out << "registrations:\n";
      for (auto item : msg.registrations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Group & msg, bool use_flow_style = false)
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
  const msg05_base::msg::Group & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::Group & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::Group>()
{
  return "msg05_base::msg::Group";
}

template<>
inline const char * name<msg05_base::msg::Group>()
{
  return "msg05_base/msg/Group";
}

template<>
struct has_fixed_size<msg05_base::msg::Group>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::Group>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::Group>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__GROUP__TRAITS_HPP_
