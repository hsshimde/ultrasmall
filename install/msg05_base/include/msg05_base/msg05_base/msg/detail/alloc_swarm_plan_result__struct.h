// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/AllocSwarmPlanResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AllocSwarmPlanResult in the package msg05_base.
typedef struct msg05_base__msg__AllocSwarmPlanResult
{
  uint8_t structure_needs_at_least_one_member;
} msg05_base__msg__AllocSwarmPlanResult;

// Struct for a sequence of msg05_base__msg__AllocSwarmPlanResult.
typedef struct msg05_base__msg__AllocSwarmPlanResult__Sequence
{
  msg05_base__msg__AllocSwarmPlanResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__AllocSwarmPlanResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__ALLOC_SWARM_PLAN_RESULT__STRUCT_H_
