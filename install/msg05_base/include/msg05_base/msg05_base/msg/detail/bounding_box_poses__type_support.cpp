// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg05_base/msg/detail/bounding_box_poses__struct.hpp"
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

void BoundingBoxPoses_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg05_base::msg::BoundingBoxPoses(_init);
}

void BoundingBoxPoses_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg05_base::msg::BoundingBoxPoses *>(message_memory);
  typed_message->~BoundingBoxPoses();
}

size_t size_function__BoundingBoxPoses__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msg05_base::msg::BoundingBoxPos> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingBoxPoses__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msg05_base::msg::BoundingBoxPos> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingBoxPoses__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msg05_base::msg::BoundingBoxPos> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundingBoxPoses__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msg05_base::msg::BoundingBoxPos *>(
    get_const_function__BoundingBoxPoses__data(untyped_member, index));
  auto & value = *reinterpret_cast<msg05_base::msg::BoundingBoxPos *>(untyped_value);
  value = item;
}

void assign_function__BoundingBoxPoses__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msg05_base::msg::BoundingBoxPos *>(
    get_function__BoundingBoxPoses__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const msg05_base::msg::BoundingBoxPos *>(untyped_value);
  item = value;
}

void resize_function__BoundingBoxPoses__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msg05_base::msg::BoundingBoxPos> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundingBoxPoses_message_member_array[4] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::BoundingBoxPoses, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "header_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::BoundingBoxPoses, header_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_header_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::BoundingBoxPoses, image_header_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::BoundingBoxPos>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::BoundingBoxPoses, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingBoxPoses__data,  // size() function pointer
    get_const_function__BoundingBoxPoses__data,  // get_const(index) function pointer
    get_function__BoundingBoxPoses__data,  // get(index) function pointer
    fetch_function__BoundingBoxPoses__data,  // fetch(index, &value) function pointer
    assign_function__BoundingBoxPoses__data,  // assign(index, value) function pointer
    resize_function__BoundingBoxPoses__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundingBoxPoses_message_members = {
  "msg05_base::msg",  // message namespace
  "BoundingBoxPoses",  // message name
  4,  // number of fields
  sizeof(msg05_base::msg::BoundingBoxPoses),
  BoundingBoxPoses_message_member_array,  // message members
  BoundingBoxPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxPoses_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundingBoxPoses_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundingBoxPoses_message_members,
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
get_message_type_support_handle<msg05_base::msg::BoundingBoxPoses>()
{
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::BoundingBoxPoses_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg05_base, msg, BoundingBoxPoses)() {
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::BoundingBoxPoses_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
