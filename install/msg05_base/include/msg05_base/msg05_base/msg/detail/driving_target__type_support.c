// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/driving_target__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/driving_target__functions.h"
#include "msg05_base/msg/detail/driving_target__struct.h"


// Include directives for member types
// Member `pose`
#include "msg05_base/msg/driving_pose.h"
// Member `pose`
#include "msg05_base/msg/detail/driving_pose__rosidl_typesupport_introspection_c.h"
// Member `linear`
// Member `angular`
#include "msg05_base/msg/vector3_f32.h"
// Member `linear`
// Member `angular`
#include "msg05_base/msg/detail/vector3_f32__rosidl_typesupport_introspection_c.h"
// Member `formation`
#include "msg05_base/msg/point_i16.h"
// Member `formation`
#include "msg05_base/msg/detail/point_i16__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__DrivingTarget__init(message_memory);
}

void msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_fini_function(void * message_memory)
{
  msg05_base__msg__DrivingTarget__fini(message_memory);
}

size_t msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__size_function__DrivingTarget__formation(
  const void * untyped_member)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_const_function__DrivingTarget__formation(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__PointI16__Sequence * member =
    (const msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_function__DrivingTarget__formation(
  void * untyped_member, size_t index)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__fetch_function__DrivingTarget__formation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__PointI16 * item =
    ((const msg05_base__msg__PointI16 *)
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_const_function__DrivingTarget__formation(untyped_member, index));
  msg05_base__msg__PointI16 * value =
    (msg05_base__msg__PointI16 *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__assign_function__DrivingTarget__formation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__PointI16 * item =
    ((msg05_base__msg__PointI16 *)
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_function__DrivingTarget__formation(untyped_member, index));
  const msg05_base__msg__PointI16 * value =
    (const msg05_base__msg__PointI16 *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__resize_function__DrivingTarget__formation(
  void * untyped_member, size_t size)
{
  msg05_base__msg__PointI16__Sequence * member =
    (msg05_base__msg__PointI16__Sequence *)(untyped_member);
  msg05_base__msg__PointI16__Sequence__fini(member);
  return msg05_base__msg__PointI16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__DrivingTarget, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__DrivingTarget, linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__DrivingTarget, angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "formation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__DrivingTarget, formation),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__size_function__DrivingTarget__formation,  // size() function pointer
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_const_function__DrivingTarget__formation,  // get_const(index) function pointer
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__get_function__DrivingTarget__formation,  // get(index) function pointer
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__fetch_function__DrivingTarget__formation,  // fetch(index, &value) function pointer
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__assign_function__DrivingTarget__formation,  // assign(index, value) function pointer
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__resize_function__DrivingTarget__formation  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_members = {
  "msg05_base__msg",  // message namespace
  "DrivingTarget",  // message name
  4,  // number of fields
  sizeof(msg05_base__msg__DrivingTarget),
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array,  // message members
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_type_support_handle = {
  0,
  &msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, DrivingTarget)() {
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, DrivingPose)();
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Vector3F32)();
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, Vector3F32)();
  msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, PointI16)();
  if (!msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__DrivingTarget__rosidl_typesupport_introspection_c__DrivingTarget_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
