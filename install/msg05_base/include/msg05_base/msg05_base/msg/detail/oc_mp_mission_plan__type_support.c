// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/OcMpMissionPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/oc_mp_mission_plan__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/oc_mp_mission_plan__functions.h"
#include "msg05_base/msg/detail/oc_mp_mission_plan__struct.h"


// Include directives for member types
// Member `mission_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `mission_area`
#include "msg05_base/msg/rect.h"
// Member `mission_area`
#include "msg05_base/msg/detail/rect__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__OcMpMissionPlan__init(message_memory);
}

void msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_fini_function(void * message_memory)
{
  msg05_base__msg__OcMpMissionPlan__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_member_array[2] = {
  {
    "mission_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__OcMpMissionPlan, mission_name),  // bytes offset in struct
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
    offsetof(msg05_base__msg__OcMpMissionPlan, mission_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_members = {
  "msg05_base__msg",  // message namespace
  "OcMpMissionPlan",  // message name
  2,  // number of fields
  sizeof(msg05_base__msg__OcMpMissionPlan),
  msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_member_array,  // message members
  msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_type_support_handle = {
  0,
  &msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, OcMpMissionPlan)() {
  msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Rect)();
  if (!msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__OcMpMissionPlan__rosidl_typesupport_introspection_c__OcMpMissionPlan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
