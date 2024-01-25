// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/msg/detail/bounding_box_poses__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/msg/detail/bounding_box_poses__functions.h"
#include "msg05_base/msg/detail/bounding_box_poses__struct.h"


// Include directives for member types
// Member `data`
#include "msg05_base/msg/bounding_box_pos.h"
// Member `data`
#include "msg05_base/msg/detail/bounding_box_pos__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__msg__BoundingBoxPoses__init(message_memory);
}

void msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_fini_function(void * message_memory)
{
  msg05_base__msg__BoundingBoxPoses__fini(message_memory);
}

size_t msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__size_function__BoundingBoxPoses__data(
  const void * untyped_member)
{
  const msg05_base__msg__BoundingBoxPos__Sequence * member =
    (const msg05_base__msg__BoundingBoxPos__Sequence *)(untyped_member);
  return member->size;
}

const void * msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxPoses__data(
  const void * untyped_member, size_t index)
{
  const msg05_base__msg__BoundingBoxPos__Sequence * member =
    (const msg05_base__msg__BoundingBoxPos__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_function__BoundingBoxPoses__data(
  void * untyped_member, size_t index)
{
  msg05_base__msg__BoundingBoxPos__Sequence * member =
    (msg05_base__msg__BoundingBoxPos__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxPoses__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg05_base__msg__BoundingBoxPos * item =
    ((const msg05_base__msg__BoundingBoxPos *)
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxPoses__data(untyped_member, index));
  msg05_base__msg__BoundingBoxPos * value =
    (msg05_base__msg__BoundingBoxPos *)(untyped_value);
  *value = *item;
}

void msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__assign_function__BoundingBoxPoses__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg05_base__msg__BoundingBoxPos * item =
    ((msg05_base__msg__BoundingBoxPos *)
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_function__BoundingBoxPoses__data(untyped_member, index));
  const msg05_base__msg__BoundingBoxPos * value =
    (const msg05_base__msg__BoundingBoxPos *)(untyped_value);
  *item = *value;
}

bool msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__resize_function__BoundingBoxPoses__data(
  void * untyped_member, size_t size)
{
  msg05_base__msg__BoundingBoxPos__Sequence * member =
    (msg05_base__msg__BoundingBoxPos__Sequence *)(untyped_member);
  msg05_base__msg__BoundingBoxPos__Sequence__fini(member);
  return msg05_base__msg__BoundingBoxPos__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__BoundingBoxPoses, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__BoundingBoxPoses, header_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_header_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__BoundingBoxPoses, image_header_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__msg__BoundingBoxPoses, data),  // bytes offset in struct
    NULL,  // default value
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__size_function__BoundingBoxPoses__data,  // size() function pointer
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxPoses__data,  // get_const(index) function pointer
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__get_function__BoundingBoxPoses__data,  // get(index) function pointer
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxPoses__data,  // fetch(index, &value) function pointer
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__assign_function__BoundingBoxPoses__data,  // assign(index, value) function pointer
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__resize_function__BoundingBoxPoses__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_members = {
  "msg05_base__msg",  // message namespace
  "BoundingBoxPoses",  // message name
  4,  // number of fields
  sizeof(msg05_base__msg__BoundingBoxPoses),
  msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_member_array,  // message members
  msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_type_support_handle = {
  0,
  &msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, BoundingBoxPoses)() {
  msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, msg, BoundingBoxPos)();
  if (!msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_type_support_handle.typesupport_identifier) {
    msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__msg__BoundingBoxPoses__rosidl_typesupport_introspection_c__BoundingBoxPoses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif