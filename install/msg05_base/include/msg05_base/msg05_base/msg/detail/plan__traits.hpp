// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLAN__TRAITS_HPP_
#define MSG05_BASE__MSG__DETAIL__PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/msg/detail/plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'groups'
#include "msg05_base/msg/detail/group__traits.hpp"
// Member 'mission_area'
// Member 'mission_sub_area'
#include "msg05_base/msg/detail/rect__traits.hpp"
// Member 'targets'
#include "msg05_base/msg/detail/target__traits.hpp"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__traits.hpp"

namespace msg05_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const Plan & msg,
  std::ostream & out)
{
  out << "{";
  // member: groups
  {
    if (msg.groups.size() == 0) {
      out << "groups: []";
    } else {
      out << "groups: [";
      size_t pending_items = msg.groups.size();
      for (auto item : msg.groups) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mission
  {
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
    out << ", ";
  }

  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << ", ";
  }

  // member: mission_area
  {
    out << "mission_area: ";
    to_flow_style_yaml(msg.mission_area, out);
    out << ", ";
  }

  // member: mission_sub_area
  {
    out << "mission_sub_area: ";
    to_flow_style_yaml(msg.mission_sub_area, out);
    out << ", ";
  }

  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Plan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.groups.size() == 0) {
      out << "groups: []\n";
    } else {
      out << "groups:\n";
      for (auto item : msg.groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
    out << "\n";
  }

  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
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

  // member: mission_sub_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_sub_area:\n";
    to_block_style_yaml(msg.mission_sub_area, out, indentation + 2);
  }

  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Plan & msg, bool use_flow_style = false)
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
  const msg05_base::msg::Plan & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::msg::Plan & msg)
{
  return msg05_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::msg::Plan>()
{
  return "msg05_base::msg::Plan";
}

template<>
inline const char * name<msg05_base::msg::Plan>()
{
  return "msg05_base/msg/Plan";
}

template<>
struct has_fixed_size<msg05_base::msg::Plan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg05_base::msg::Plan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg05_base::msg::Plan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__MSG__DETAIL__PLAN__TRAITS_HPP_
