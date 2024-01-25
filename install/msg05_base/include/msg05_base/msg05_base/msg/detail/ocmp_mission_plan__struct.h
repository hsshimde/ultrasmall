// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/OCMPMissionPlan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_name'
#include "rosidl_runtime_c/string.h"
// Member 'mission_area'
#include "msg05_base/msg/detail/rect__struct.h"

/// Struct defined in msg/OCMPMissionPlan in the package msg05_base.
typedef struct msg05_base__msg__OCMPMissionPlan
{
  rosidl_runtime_c__String mission_name;
  msg05_base__msg__Rect mission_area;
} msg05_base__msg__OCMPMissionPlan;

// Struct for a sequence of msg05_base__msg__OCMPMissionPlan.
typedef struct msg05_base__msg__OCMPMissionPlan__Sequence
{
  msg05_base__msg__OCMPMissionPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__OCMPMissionPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__OCMP_MISSION_PLAN__STRUCT_H_
