// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/GroupStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GroupStatusCmd in the package msg05_base.
typedef struct msg05_base__msg__GroupStatusCmd
{
  uint8_t group_id;
  uint8_t mission_status;
  uint8_t task;
} msg05_base__msg__GroupStatusCmd;

// Struct for a sequence of msg05_base__msg__GroupStatusCmd.
typedef struct msg05_base__msg__GroupStatusCmd__Sequence
{
  msg05_base__msg__GroupStatusCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__GroupStatusCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__GROUP_STATUS_CMD__STRUCT_H_
