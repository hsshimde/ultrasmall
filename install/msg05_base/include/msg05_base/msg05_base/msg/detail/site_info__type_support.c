// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/SiteInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/site_info__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/site_info__functions.h"
#include "msg05_base/msg/detail/site_info__struct.h"


// Include directives for member types
// Member `points`
#include "msg05_base/msg/point_i16.h"
// Member `points`
#include "msg05_base/msg/detail/point_i16__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__SiteInfo__init(message_memory);
}

void msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_fini_function(void * message_memory)
{
  msg05_base__msg__SiteInfo__fini(message_memory);
}

size_t msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__size_function__SiteInfo__points(
  const void * untyped_member)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_const_function__SiteInfo__points(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_function__SiteInfo__points(
  void * untyped_member, size_t index)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__fetch_function__SiteInfo__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__PointI16 * item =
    ((const msg05_base__msg__PointI16 *)
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_const_function__SiteInfo__points(untyped_member, index));
  msg05_base__msg__PointI16 * value =
    (msg05_base__msg__PointI16 *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__assign_function__SiteInfo__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__PointI16 * item =
    ((msg05_base__msg__PointI16 *)
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_function__SiteInfo__points(untyped_member, index));
  const msg05_base__msg__PointI16 * value =
    (const msg05_base__msg__PointI16 *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__resize_function__SiteInfo__points(
  void * untyped_member, size_t size)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  msg05_base__msg__PointI16__Sequence__fini(member);
  return msg05_base__msg__PointI16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__SiteInfo, points),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__size_function__SiteInfo__points,  // size() function pointer
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_const_function__SiteInfo__points,  // get_const(index) function pointer
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__get_function__SiteInfo__points,  // get(index) function pointer
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__fetch_function__SiteInfo__points,  // fetch(index, &value) function pointer
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__assign_function__SiteInfo__points,  // assign(index, value) function pointer
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__resize_function__SiteInfo__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_members = {
  "msg05_base__msg",  // message namespace
  "SiteInfo",  // message name
  1,  // number of fields
  sizeof(msg05_base__msg__SiteInfo),
  msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_member_array,  // message members
  msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_type_support_handle = {
  0,
  &msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, SiteInfo)() {
  msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, PointI16)();
  if (!msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__SiteInfo__rosidl_typesupport_introspection_c__SiteInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
