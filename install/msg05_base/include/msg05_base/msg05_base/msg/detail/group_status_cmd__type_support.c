// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/GroupStatusCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/group_status_cmd__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/group_status_cmd__functions.h"
#include "msg05_base/msg/detail/group_status_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__GroupStatusCmd__init(message_memory);
}

void msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_fini_function(void * message_memory)
{
  msg05_base__msg__GroupStatusCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_member_array[3] = {
  {
    "group_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__GroupStatusCmd, group_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__GroupStatusCmd, mission_status),  // bytes offset in struct
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
    offsetof(msg05_base__msg__GroupStatusCmd, task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_members = {
  "msg05_base__msg",  // message namespace
  "GroupStatusCmd",  // message name
  3,  // number of fields
  sizeof(msg05_base__msg__GroupStatusCmd),
  msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_member_array,  // message members
  msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_type_support_handle = {
  0,
  &msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, GroupStatusCmd)() {
  if (!msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__GroupStatusCmd__rosidl_typesupport_introspection_c__GroupStatusCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif