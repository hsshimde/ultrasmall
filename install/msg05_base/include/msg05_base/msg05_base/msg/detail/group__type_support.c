// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/Group.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/group__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/group__functions.h"
#include "msg05_base/msg/detail/group__struct.h"


// Include directives for member types
// Member `registrations`
#include "msg05_base/msg/platform_registration.h"
// Member `registrations`
#include "msg05_base/msg/detail/platform_registration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__Group__init(message_memory);
}

void msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_fini_function(void * message_memory)
{
  msg05_base__msg__Group__fini(message_memory);
}

size_t msg05_base__msg__Group__rosidl_typesupport_introspection_c__size_function__Group__registrations(
  const void * untyped_member)
{
  const msg05_base__msg__PlatformRegistration__Sequence * member =
    (const msg05_base__msg__PlatformRegistration__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_const_function__Group__registrations(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__PlatformRegistration__Sequence * member =
    (const msg05_base__msg__PlatformRegistration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_function__Group__registrations(
  void * untyped_member, size_t index)
{
  msg05_base__msg__PlatformRegistration__Sequence * member =
    (msg05_base__msg__PlatformRegistration__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__Group__rosidl_typesupport_introspection_c__fetch_function__Group__registrations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__PlatformRegistration * item =
    ((const msg05_base__msg__PlatformRegistration *)
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_const_function__Group__registrations(untyped_member, index));
  msg05_base__msg__PlatformRegistration * value =
    (msg05_base__msg__PlatformRegistration *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__Group__rosidl_typesupport_introspection_c__assign_function__Group__registrations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__PlatformRegistration * item =
    ((msg05_base__msg__PlatformRegistration *)
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_function__Group__registrations(untyped_member, index));
  const msg05_base__msg__PlatformRegistration * value =
    (const msg05_base__msg__PlatformRegistration *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__Group__rosidl_typesupport_introspection_c__resize_function__Group__registrations(
  void * untyped_member, size_t size)
{
  msg05_base__msg__PlatformRegistration__Sequence * member =
    (msg05_base__msg__PlatformRegistration__Sequence *)(untyped_member);
  msg05_base__msg__PlatformRegistration__Sequence__fini(member);
  return msg05_base__msg__PlatformRegistration__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_member_array[3] = {
  {
    "group_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Group, group_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leader_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Group, leader_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "registrations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__Group, registrations),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__size_function__Group__registrations,  // size() function pointer
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_const_function__Group__registrations,  // get_const(index) function pointer
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__get_function__Group__registrations,  // get(index) function pointer
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__fetch_function__Group__registrations,  // fetch(index, &value) function pointer
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__assign_function__Group__registrations,  // assign(index, value) function pointer
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__resize_function__Group__registrations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_members = {
  "msg05_base__msg",  // message namespace
  "Group",  // message name
  3,  // number of fields
  sizeof(msg05_base__msg__Group),
  msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_member_array,  // message members
  msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_type_support_handle = {
  0,
  &msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Group)() {
  msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, PlatformRegistration)();
  if (!msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__Group__rosidl_typesupport_introspection_c__Group_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
