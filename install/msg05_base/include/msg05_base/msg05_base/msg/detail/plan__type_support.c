// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/plan__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/plan__functions.h"
#include "msg05_base/msg/detail/plan__struct.h"


// Include directives for member types
// Member `groups`
#include "msg05_base/msg/group.h"
// Member `groups`
#include "msg05_base/msg/detail/group__rosidl_typesupport_introspection_c.h"
// Member `mission_area`
// Member `mission_sub_area`
#include "msg05_base/msg/rect.h"
// Member `mission_area`
// Member `mission_sub_area`
#include "msg05_base/msg/detail/rect__rosidl_typesupport_introspection_c.h"
// Member `targets`
#include "msg05_base/msg/target.h"
// Member `targets`
#include "msg05_base/msg/detail/target__rosidl_typesupport_introspection_c.h"
// Member `formation`
#include "msg05_base/msg/point_i16.h"
// Member `formation`
#include "msg05_base/msg/detail/point_i16__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__Plan__init(message_memory);
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_fini_function(void * message_memory)
{
  msg05_base__msg__Plan__fini(message_memory);
}

size_t msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__groups(
  const void * untyped_member)
{
  const msg05_base__msg__Group__Sequence * member =
    (const msg05_base__msg__Group__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__groups(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__Group__Sequence * member =
    (const msg05_base__msg__Group__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__groups(
  void * untyped_member, size_t index)
{
  msg05_base__msg__Group__Sequence * member =
    (msg05_base__msg__Group__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__Group * item =
    ((const msg05_base__msg__Group *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__groups(untyped_member, index));
  msg05_base__msg__Group * value =
    (msg05_base__msg__Group *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__Group * item =
    ((msg05_base__msg__Group *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__groups(untyped_member, index));
  const msg05_base__msg__Group * value =
    (const msg05_base__msg__Group *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__groups(
  void * untyped_member, size_t size)
{
  msg05_base__msg__Group__Sequence * member =
    (msg05_base__msg__Group__Sequence *)(untyped_member);
  msg05_base__msg__Group__Sequence__fini(member);
  return msg05_base__msg__Group__Sequence__init(member, size);
}

size_t msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__targets(
  const void * untyped_member)
{
  const msg05_base__msg__Target__Sequence * member =
    (const msg05_base__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__targets(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__Target__Sequence * member =
    (const msg05_base__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__targets(
  void * untyped_member, size_t index)
{
  msg05_base__msg__Target__Sequence * member =
    (msg05_base__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__Target * item =
    ((const msg05_base__msg__Target *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__targets(untyped_member, index));
  msg05_base__msg__Target * value =
    (msg05_base__msg__Target *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__Target * item =
    ((msg05_base__msg__Target *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__targets(untyped_member, index));
  const msg05_base__msg__Target * value =
    (const msg05_base__msg__Target *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__targets(
  void * untyped_member, size_t size)
{
  msg05_base__msg__Target__Sequence * member =
    (msg05_base__msg__Target__Sequence *)(untyped_member);
  msg05_base__msg__Target__Sequence__fini(member);
  return msg05_base__msg__Target__Sequence__init(member, size);
}

size_t msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__formation(
  const void * untyped_member)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__formation(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__formation(
  void * untyped_member, size_t index)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__formation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__PointI16 * item =
    ((const msg05_base__msg__PointI16 *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__formation(untyped_member, index));
  msg05_base__msg__PointI16 * value =
    (msg05_base__msg__PointI16 *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__formation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__PointI16 * item =
    ((msg05_base__msg__PointI16 *)
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__formation(untyped_member, index));
  const msg05_base__msg__PointI16 * value =
    (const msg05_base__msg__PointI16 *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__formation(
  void * untyped_member, size_t size)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  msg05_base__msg__PointI16__Sequence__fini(member);
  return msg05_base__msg__PointI16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[7] = {
  {
    "groups",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, groups),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__groups,  // size() function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__groups,  // get_const(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__groups,  // get(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__groups,  // fetch(index, &value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__groups,  // assign(index, value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__groups  // resize(index) function pointer
  },
  {
    "mission",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, mission),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, mission_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_sub_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, mission_sub_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, targets),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__targets,  // size() function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__targets,  // get_const(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__targets,  // get(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__targets,  // fetch(index, &value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__targets,  // assign(index, value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__targets  // resize(index) function pointer
  },
  {
    "formation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Plan, formation),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__size_function__Plan__formation,  // size() function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_const_function__Plan__formation,  // get_const(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__get_function__Plan__formation,  // get(index) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__fetch_function__Plan__formation,  // fetch(index, &value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__assign_function__Plan__formation,  // assign(index, value) function pointer
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__resize_function__Plan__formation  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_members = {
  "msg05_base__msg",  // message namespace
  "Plan",  // message name
  7,  // number of fields
  sizeof(msg05_base__msg__Plan),
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array,  // message members
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_type_support_handle = {
  0,
  &msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Plan)() {
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Group)();
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Rect)();
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Rect)();
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Target)();
  msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, PointI16)();
  if (!msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__Plan__rosidl_typesupport_introspection_c__Plan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
