// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:srv/AllocSwarmGroups.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_H_
#define MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'swarmgroups'
#include "msg05_base/msg/detail/swarm_groups__struct.h"

/// Struct defined in srv/AllocSwarmGroups in the package msg05_base.
typedef struct msg05_base__srv__AllocSwarmGroups_Request
{
  msg05_base__msg__SwarmGroups__Sequence swarmgroups;
} msg05_base__srv__AllocSwarmGroups_Request;

// Struct for a sequence of msg05_base__srv__AllocSwarmGroups_Request.
typedef struct msg05_base__srv__AllocSwarmGroups_Request__Sequence
{
  msg05_base__srv__AllocSwarmGroups_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__srv__AllocSwarmGroups_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/AllocSwarmGroups in the package msg05_base.
typedef struct msg05_base__srv__AllocSwarmGroups_Response
{
  std_msgs__msg__Bool result;
} msg05_base__srv__AllocSwarmGroups_Response;

// Struct for a sequence of msg05_base__srv__AllocSwarmGroups_Response.
typedef struct msg05_base__srv__AllocSwarmGroups_Response__Sequence
{
  msg05_base__srv__AllocSwarmGroups_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__srv__AllocSwarmGroups_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__SRV__DETAIL__ALLOC_SWARM_GROUPS__STRUCT_H_
