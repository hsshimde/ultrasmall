// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/SwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SwarmGroups in the package msg05_base.
typedef struct msg05_base__msg__SwarmGroups
{
  uint8_t platform_id;
  uint8_t group_id;
  uint8_t leader_id;
  uint8_t platform_type;
} msg05_base__msg__SwarmGroups;

// Struct for a sequence of msg05_base__msg__SwarmGroups.
typedef struct msg05_base__msg__SwarmGroups__Sequence
{
  msg05_base__msg__SwarmGroups * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__SwarmGroups__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__SWARM_GROUPS__STRUCT_H_
