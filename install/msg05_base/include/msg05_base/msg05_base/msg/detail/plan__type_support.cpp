// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg05_base/msg/detail/plan__struct.hpp"
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

void Plan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg05_base::msg::Plan(_init);
}

void Plan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg05_base::msg::Plan *>(message_memory);
  typed_message->~Plan();
}

size_t size_function__Plan__groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msg05_base::msg::Group> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Plan__groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msg05_base::msg::Group> *>(untyped_member);
  return &member[index];
}

void * get_function__Plan__groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msg05_base::msg::Group> *>(untyped_member);
  return &member[index];
}

void fetch_function__Plan__groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msg05_base::msg::Group *>(
    get_const_function__Plan__groups(untyped_member, index));
  auto & value = *reinterpret_cast<msg05_base::msg::Group *>(untyped_value);
  value = item;
}

void assign_function__Plan__groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msg05_base::msg::Group *>(
    get_function__Plan__groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const msg05_base::msg::Group *>(untyped_value);
  item = value;
}

void resize_function__Plan__groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msg05_base::msg::Group> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Plan__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msg05_base::msg::Target> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Plan__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msg05_base::msg::Target> *>(untyped_member);
  return &member[index];
}

void * get_function__Plan__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msg05_base::msg::Target> *>(untyped_member);
  return &member[index];
}

void fetch_function__Plan__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msg05_base::msg::Target *>(
    get_const_function__Plan__targets(untyped_member, index));
  auto & value = *reinterpret_cast<msg05_base::msg::Target *>(untyped_value);
  value = item;
}

void assign_function__Plan__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msg05_base::msg::Target *>(
    get_function__Plan__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const msg05_base::msg::Target *>(untyped_value);
  item = value;
}

void resize_function__Plan__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msg05_base::msg::Target> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Plan__formation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Plan__formation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return &member[index];
}

void * get_function__Plan__formation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  return &member[index];
}

void fetch_function__Plan__formation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msg05_base::msg::PointI16 *>(
    get_const_function__Plan__formation(untyped_member, index));
  auto & value = *reinterpret_cast<msg05_base::msg::PointI16 *>(untyped_value);
  value = item;
}

void assign_function__Plan__formation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msg05_base::msg::PointI16 *>(
    get_function__Plan__formation(untyped_member, index));
  const auto & value = *reinterpret_cast<const msg05_base::msg::PointI16 *>(untyped_value);
  item = value;
}

void resize_function__Plan__formation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msg05_base::msg::PointI16> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Plan_message_member_array[7] = {
  {
    "groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Group>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__Plan__groups,  // size() function pointer
    get_const_function__Plan__groups,  // get_const(index) function pointer
    get_function__Plan__groups,  // get(index) function pointer
    fetch_function__Plan__groups,  // fetch(index, &value) function pointer
    assign_function__Plan__groups,  // assign(index, value) function pointer
    resize_function__Plan__groups  // resize(index) function pointer
  },
  {
    "mission",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, mission),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, task),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mission_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Rect>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, mission_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mission_sub_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Rect>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, mission_sub_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Target>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__Plan__targets,  // size() function pointer
    get_const_function__Plan__targets,  // get_const(index) function pointer
    get_function__Plan__targets,  // get(index) function pointer
    fetch_function__Plan__targets,  // fetch(index, &value) function pointer
    assign_function__Plan__targets,  // assign(index, value) function pointer
    resize_function__Plan__targets  // resize(index) function pointer
  },
  {
    "formation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::PointI16>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::Plan, formation),  // bytes offset in struct
    nullptr,  // default value
    size_function__Plan__formation,  // size() function pointer
    get_const_function__Plan__formation,  // get_const(index) function pointer
    get_function__Plan__formation,  // get(index) function pointer
    fetch_function__Plan__formation,  // fetch(index, &value) function pointer
    assign_function__Plan__formation,  // assign(index, value) function pointer
    resize_function__Plan__formation  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Plan_message_members = {
  "msg05_base::msg",  // message namespace
  "Plan",  // message name
  7,  // number of fields
  sizeof(msg05_base::msg::Plan),
  Plan_message_member_array,  // message members
  Plan_init_function,  // function to initialize message memory (memory has to be allocated)
  Plan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Plan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Plan_message_members,
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
get_message_type_support_handle<msg05_base::msg::Plan>()
{
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::Plan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg05_base, msg, Plan)() {
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::Plan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
