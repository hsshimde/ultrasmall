// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice

#ifndef USE_CASE_ONE__SRV__DETAIL__GROUPING__TRAITS_HPP_
#define USE_CASE_ONE__SRV__DETAIL__GROUPING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "use_case_one/srv/detail/grouping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace use_case_one
{

namespace srv
{

inline void to_flow_style_yaml(
  const Grouping_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform_id
  {
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << ", ";
  }

  // member: is_leader
  {
    out << "is_leader: ";
    rosidl_generator_traits::value_to_yaml(msg.is_leader, out);
    out << ", ";
  }

  // member: request_type
  {
    out << "request_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.request_type, out);
    out << ", ";
  }

  // member: group_idx
  {
    out << "group_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.group_idx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grouping_Request & msg,
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

  // member: is_leader
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_leader: ";
    rosidl_generator_traits::value_to_yaml(msg.is_leader, out);
    out << "\n";
  }

  // member: request_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.request_type, out);
    out << "\n";
  }

  // member: group_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.group_idx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grouping_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace use_case_one

namespace rosidl_generator_traits
{

[[deprecated("use use_case_one::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const use_case_one::srv::Grouping_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  use_case_one::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use use_case_one::srv::to_yaml() instead")]]
inline std::string to_yaml(const use_case_one::srv::Grouping_Request & msg)
{
  return use_case_one::srv::to_yaml(msg);
}

template<>
inline const char * data_type<use_case_one::srv::Grouping_Request>()
{
  return "use_case_one::srv::Grouping_Request";
}

template<>
inline const char * name<use_case_one::srv::Grouping_Request>()
{
  return "use_case_one/srv/Grouping_Request";
}

template<>
struct has_fixed_size<use_case_one::srv::Grouping_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<use_case_one::srv::Grouping_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<use_case_one::srv::Grouping_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace use_case_one
{

namespace srv
{

inline void to_flow_style_yaml(
  const Grouping_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform_id
  {
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << ", ";
  }

  // member: is_leader
  {
    out << "is_leader: ";
    rosidl_generator_traits::value_to_yaml(msg.is_leader, out);
    out << ", ";
  }

  // member: reply_type
  {
    out << "reply_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.reply_type, out);
    out << ", ";
  }

  // member: group_idx
  {
    out << "group_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.group_idx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grouping_Response & msg,
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

  // member: is_leader
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_leader: ";
    rosidl_generator_traits::value_to_yaml(msg.is_leader, out);
    out << "\n";
  }

  // member: reply_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reply_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.reply_type, out);
    out << "\n";
  }

  // member: group_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.group_idx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grouping_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace use_case_one

namespace rosidl_generator_traits
{

[[deprecated("use use_case_one::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const use_case_one::srv::Grouping_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  use_case_one::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use use_case_one::srv::to_yaml() instead")]]
inline std::string to_yaml(const use_case_one::srv::Grouping_Response & msg)
{
  return use_case_one::srv::to_yaml(msg);
}

template<>
inline const char * data_type<use_case_one::srv::Grouping_Response>()
{
  return "use_case_one::srv::Grouping_Response";
}

template<>
inline const char * name<use_case_one::srv::Grouping_Response>()
{
  return "use_case_one/srv/Grouping_Response";
}

template<>
struct has_fixed_size<use_case_one::srv::Grouping_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<use_case_one::srv::Grouping_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<use_case_one::srv::Grouping_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<use_case_one::srv::Grouping>()
{
  return "use_case_one::srv::Grouping";
}

template<>
inline const char * name<use_case_one::srv::Grouping>()
{
  return "use_case_one/srv/Grouping";
}

template<>
struct has_fixed_size<use_case_one::srv::Grouping>
  : std::integral_constant<
    bool,
    has_fixed_size<use_case_one::srv::Grouping_Request>::value &&
    has_fixed_size<use_case_one::srv::Grouping_Response>::value
  >
{
};

template<>
struct has_bounded_size<use_case_one::srv::Grouping>
  : std::integral_constant<
    bool,
    has_bounded_size<use_case_one::srv::Grouping_Request>::value &&
    has_bounded_size<use_case_one::srv::Grouping_Response>::value
  >
{
};

template<>
struct is_service<use_case_one::srv::Grouping>
  : std::true_type
{
};

template<>
struct is_service_request<use_case_one::srv::Grouping_Request>
  : std::true_type
{
};

template<>
struct is_service_response<use_case_one::srv::Grouping_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // USE_CASE_ONE__SRV__DETAIL__GROUPING__TRAITS_HPP_
