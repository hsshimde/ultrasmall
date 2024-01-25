// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/SwarmGroups.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/swarm_groups__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg05_base__msg__SwarmGroups__init(msg05_base__msg__SwarmGroups * msg)
{
  if (!msg) {
    return false;
  }
  // platform_id
  // group_id
  // leader_id
  // platform_type
  return true;
}

void
msg05_base__msg__SwarmGroups__fini(msg05_base__msg__SwarmGroups * msg)
{
  if (!msg) {
    return;
  }
  // platform_id
  // group_id
  // leader_id
  // platform_type
}

bool
msg05_base__msg__SwarmGroups__are_equal(const msg05_base__msg__SwarmGroups * lhs, const msg05_base__msg__SwarmGroups * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // platform_id
  if (lhs->platform_id != rhs->platform_id) {
    return false;
  }
  // group_id
  if (lhs->group_id != rhs->group_id) {
    return false;
  }
  // leader_id
  if (lhs->leader_id != rhs->leader_id) {
    return false;
  }
  // platform_type
  if (lhs->platform_type != rhs->platform_type) {
    return false;
  }
  return true;
}

bool
msg05_base__msg__SwarmGroups__copy(
  const msg05_base__msg__SwarmGroups * input,
  msg05_base__msg__SwarmGroups * output)
{
  if (!input || !output) {
    return false;
  }
  // platform_id
  output->platform_id = input->platform_id;
  // group_id
  output->group_id = input->group_id;
  // leader_id
  output->leader_id = input->leader_id;
  // platform_type
  output->platform_type = input->platform_type;
  return true;
}

msg05_base__msg__SwarmGroups *
msg05_base__msg__SwarmGroups__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SwarmGroups * msg = (msg05_base__msg__SwarmGroups *)allocator.allocate(sizeof(msg05_base__msg__SwarmGroups), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__SwarmGroups));
  bool success = msg05_base__msg__SwarmGroups__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__SwarmGroups__destroy(msg05_base__msg__SwarmGroups * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__SwarmGroups__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__SwarmGroups__Sequence__init(msg05_base__msg__SwarmGroups__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SwarmGroups * data = NULL;

  if (size) {
    data = (msg05_base__msg__SwarmGroups *)allocator.zero_allocate(size, sizeof(msg05_base__msg__SwarmGroups), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__SwarmGroups__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__SwarmGroups__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg05_base__msg__SwarmGroups__Sequence__fini(msg05_base__msg__SwarmGroups__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg05_base__msg__SwarmGroups__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg05_base__msg__SwarmGroups__Sequence *
msg05_base__msg__SwarmGroups__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SwarmGroups__Sequence * array = (msg05_base__msg__SwarmGroups__Sequence *)allocator.allocate(sizeof(msg05_base__msg__SwarmGroups__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__SwarmGroups__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__SwarmGroups__Sequence__destroy(msg05_base__msg__SwarmGroups__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__SwarmGroups__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__SwarmGroups__Sequence__are_equal(const msg05_base__msg__SwarmGroups__Sequence * lhs, const msg05_base__msg__SwarmGroups__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__SwarmGroups__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__SwarmGroups__Sequence__copy(
  const msg05_base__msg__SwarmGroups__Sequence * input,
  msg05_base__msg__SwarmGroups__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__SwarmGroups);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__SwarmGroups * data =
      (msg05_base__msg__SwarmGroups *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__SwarmGroups__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__SwarmGroups__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__SwarmGroups__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
