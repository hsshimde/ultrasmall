// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg05_base:srv/OrderService.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__TRAITS_HPP_
#define MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg05_base/srv/detail/order_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg05_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const OrderService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrderService_Request & msg, bool use_flow_style = false)
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

}  // namespace msg05_base

namespace rosidl_generator_traits
{

[[deprecated("use msg05_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg05_base::srv::OrderService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::srv::OrderService_Request & msg)
{
  return msg05_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::srv::OrderService_Request>()
{
  return "msg05_base::srv::OrderService_Request";
}

template<>
inline const char * name<msg05_base::srv::OrderService_Request>()
{
  return "msg05_base/srv/OrderService_Request";
}

template<>
struct has_fixed_size<msg05_base::srv::OrderService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg05_base::srv::OrderService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg05_base::srv::OrderService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace msg05_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const OrderService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrderService_Response & msg, bool use_flow_style = false)
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

}  // namespace msg05_base

namespace rosidl_generator_traits
{

[[deprecated("use msg05_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg05_base::srv::OrderService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg05_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg05_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg05_base::srv::OrderService_Response & msg)
{
  return msg05_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg05_base::srv::OrderService_Response>()
{
  return "msg05_base::srv::OrderService_Response";
}

template<>
inline const char * name<msg05_base::srv::OrderService_Response>()
{
  return "msg05_base/srv/OrderService_Response";
}

template<>
struct has_fixed_size<msg05_base::srv::OrderService_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<msg05_base::srv::OrderService_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<msg05_base::srv::OrderService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg05_base::srv::OrderService>()
{
  return "msg05_base::srv::OrderService";
}

template<>
inline const char * name<msg05_base::srv::OrderService>()
{
  return "msg05_base/srv/OrderService";
}

template<>
struct has_fixed_size<msg05_base::srv::OrderService>
  : std::integral_constant<
    bool,
    has_fixed_size<msg05_base::srv::OrderService_Request>::value &&
    has_fixed_size<msg05_base::srv::OrderService_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg05_base::srv::OrderService>
  : std::integral_constant<
    bool,
    has_bounded_size<msg05_base::srv::OrderService_Request>::value &&
    has_bounded_size<msg05_base::srv::OrderService_Response>::value
  >
{
};

template<>
struct is_service<msg05_base::srv::OrderService>
  : std::true_type
{
};

template<>
struct is_service_request<msg05_base::srv::OrderService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg05_base::srv::OrderService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG05_BASE__SRV__DETAIL__ORDER_SERVICE__TRAITS_HPP_
