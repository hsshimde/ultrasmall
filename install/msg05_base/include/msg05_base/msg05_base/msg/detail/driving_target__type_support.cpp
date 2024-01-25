// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg05_base/msg/detail/driving_target__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg05_base
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DrivingTarget_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg05_base::msg::DrivingTarget(_init);
}

void DrivingTarget_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg05_base::msg::DrivingTarget *>(message_memory);
  typed_message->~DrivingTarget();
}

size_t size_function__DrivingTarget__formation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DrivingTarget__formation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return &member[index];
}

void * get_function__DrivingTarget__formation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return &member[index];
}

void fetch_function__DrivingTarget__formation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msg05_base::msg::PointI16 *>(
    get_const_function__DrivingTarget__formation(untyped_member, index));
  auto & value = *reinterpret_cast<msg05_base::msg::PointI16 *>(untyped_value);
  value = item;
}

void assign_function__DrivingTarget__formation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msg05_base::msg::PointI16 *>(
    get_function__DrivingTarget__formation(untyped_member, index));
  const auto & value = *reinterpret_cast<const msg05_base::msg::PointI16 *>(untyped_value);
  item = value;
}

void resize_function__DrivingTarget__formation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DrivingTarget_message_member_array[4] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::DrivingPose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::DrivingTarget, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Vector3F32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::DrivingTarget, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Vector3F32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::DrivingTarget, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "formation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::PointI16>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::DrivingTarget, formation),  // bytes offset in struct
    nullptr,  // default value
    size_function__DrivingTarget__formation,  // size() function pointer
    get_const_function__DrivingTarget__formation,  // get_const(index) function pointer
    get_function__DrivingTarget__formation,  // get(index) function pointer
    fetch_function__DrivingTarget__formation,  // fetch(index, &value) function pointer
    assign_function__DrivingTarget__formation,  // assign(index, value) function pointer
    resize_function__DrivingTarget__formation  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DrivingTarget_message_members = {
  "msg05_base::msg",  // message namespace
  "DrivingTarget",  // message name
  4,  // number of fields
  sizeof(msg05_base::msg::DrivingTarget),
  DrivingTarget_message_member_array,  // message members
  DrivingTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  DrivingTarget_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DrivingTarget_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DrivingTarget_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace msg05_base


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg05_base::msg::DrivingTarget>()
{
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::DrivingTarget_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg05_base, msg, DrivingTarget)() {
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::DrivingTarget_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
