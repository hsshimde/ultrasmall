// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "msg05_base/msg/detail/error__struct.h"

/// Struct defined in msg/MissionResult in the package msg05_base.
typedef struct msg05_base__msg__MissionResult
{
  uint8_t id;
  uint8_t mission_status;
  msg05_base__msg__Error error;
} msg05_base__msg__MissionResult;

// Struct for a sequence of msg05_base__msg__MissionResult.
typedef struct msg05_base__msg__MissionResult__Sequence
{
  msg05_base__msg__MissionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__MissionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULT__STRUCT_H_
