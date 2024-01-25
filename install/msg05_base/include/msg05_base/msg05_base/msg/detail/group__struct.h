// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Group.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'registrations'
#include "msg05_base/msg/detail/platform_registration__struct.h"

/// Struct defined in msg/Group in the package msg05_base.
typedef struct msg05_base__msg__Group
{
  uint8_t group_id;
  uint8_t leader_id;
  msg05_base__msg__PlatformRegistration__Sequence registrations;
} msg05_base__msg__Group;

// Struct for a sequence of msg05_base__msg__Group.
typedef struct msg05_base__msg__Group__Sequence
{
  msg05_base__msg__Group * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Group__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__GROUP__STRUCT_H_
