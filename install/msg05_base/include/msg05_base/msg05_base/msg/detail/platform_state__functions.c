// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/platform_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actuator_state`
// Member `low_power_mode`
// Member `network_connection`
#include "std_msgs/msg/detail/bool__functions.h"

bool
msg05_base__msg__PlatformState__init(msg05_base__msg__PlatformState * msg)
{
  if (!msg) {
    return false;
  }
  // platform_id
  // group_id
  // actuator_state
  if (!std_msgs__msg__Bool__init(&msg->actuator_state)) {
    msg05_base__msg__PlatformState__fini(msg);
    return false;
  }
  // low_power_mode
  if (!std_msgs__msg__Bool__init(&msg->low_power_mode)) {
    msg05_base__msg__PlatformState__fini(msg);
    return false;
  }
  // battery_percentage
  // timestamp
  // network_connection
  if (!std_msgs__msg__Bool__init(&msg->network_connection)) {
    msg05_base__msg__PlatformState__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__msg__PlatformState__fini(msg05_base__msg__PlatformState * msg)
{
  if (!msg) {
    return;
  }
  // platform_id
  // group_id
  // actuator_state
  std_msgs__msg__Bool__fini(&msg->actuator_state);
  // low_power_mode
  std_msgs__msg__Bool__fini(&msg->low_power_mode);
  // battery_percentage
  // timestamp
  // network_connection
  std_msgs__msg__Bool__fini(&msg->network_connection);
}

bool
msg05_base__msg__PlatformState__are_equal(const msg05_base__msg__PlatformState * lhs, const msg05_base__msg__PlatformState * rhs)
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
  // actuator_state
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->actuator_state), &(rhs->actuator_state)))
  {
    return false;
  }
  // low_power_mode
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->low_power_mode), &(rhs->low_power_mode)))
  {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // network_connection
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->network_connection), &(rhs->network_connection)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__msg__PlatformState__copy(
  const msg05_base__msg__PlatformState * input,
  msg05_base__msg__PlatformState * output)
{
  if (!input || !output) {
    return false;
  }
  // platform_id
  output->platform_id = input->platform_id;
  // group_id
  output->group_id = input->group_id;
  // actuator_state
  if (!std_msgs__msg__Bool__copy(
      &(input->actuator_state), &(output->actuator_state)))
  {
    return false;
  }
  // low_power_mode
  if (!std_msgs__msg__Bool__copy(
      &(input->low_power_mode), &(output->low_power_mode)))
  {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // timestamp
  output->timestamp = input->timestamp;
  // network_connection
  if (!std_msgs__msg__Bool__copy(
      &(input->network_connection), &(output->network_connection)))
  {
    return false;
  }
  return true;
}

msg05_base__msg__PlatformState *
msg05_base__msg__PlatformState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__PlatformState * msg = (msg05_base__msg__PlatformState *)allocator.allocate(sizeof(msg05_base__msg__PlatformState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__PlatformState));
  bool success = msg05_base__msg__PlatformState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__PlatformState__destroy(msg05_base__msg__PlatformState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__PlatformState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__PlatformState__Sequence__init(msg05_base__msg__PlatformState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__PlatformState * data = NULL;

  if (size) {
    data = (msg05_base__msg__PlatformState *)allocator.zero_allocate(size, sizeof(msg05_base__msg__PlatformState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__PlatformState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__PlatformState__fini(&data[i - 1]);
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
msg05_base__msg__PlatformState__Sequence__fini(msg05_base__msg__PlatformState__Sequence * array)
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
      msg05_base__msg__PlatformState__fini(&array->data[i]);
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

msg05_base__msg__PlatformState__Sequence *
msg05_base__msg__PlatformState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__PlatformState__Sequence * array = (msg05_base__msg__PlatformState__Sequence *)allocator.allocate(sizeof(msg05_base__msg__PlatformState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__PlatformState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__PlatformState__Sequence__destroy(msg05_base__msg__PlatformState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__PlatformState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__PlatformState__Sequence__are_equal(const msg05_base__msg__PlatformState__Sequence * lhs, const msg05_base__msg__PlatformState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__PlatformState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__PlatformState__Sequence__copy(
  const msg05_base__msg__PlatformState__Sequence * input,
  msg05_base__msg__PlatformState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__PlatformState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__PlatformState * data =
      (msg05_base__msg__PlatformState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__PlatformState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__PlatformState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__PlatformState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
