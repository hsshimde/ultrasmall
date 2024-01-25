// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/MissionResults.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/mission_result__struct.h"

/// Struct defined in msg/MissionResults in the package msg05_base.
typedef struct msg05_base__msg__MissionResults
{
  msg05_base__msg__MissionResult__Sequence data;
} msg05_base__msg__MissionResults;

// Struct for a sequence of msg05_base__msg__MissionResults.
typedef struct msg05_base__msg__MissionResults__Sequence
{
  msg05_base__msg__MissionResults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__MissionResults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__MISSION_RESULTS__STRUCT_H_
