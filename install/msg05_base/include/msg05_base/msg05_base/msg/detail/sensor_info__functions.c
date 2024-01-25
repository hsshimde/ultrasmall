// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/SensorInfo.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/sensor_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "msg05_base/msg/detail/platform_state__functions.h"
// Member `bbox`
#include "msg05_base/msg/detail/bounding_box_poses__functions.h"
// Member `driving`
#include "msg05_base/msg/detail/driving_pose__functions.h"

bool
msg05_base__msg__SensorInfo__init(msg05_base__msg__SensorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // state
  if (!msg05_base__msg__PlatformState__init(&msg->state)) {
    msg05_base__msg__SensorInfo__fini(msg);
    return false;
  }
  // bbox
  if (!msg05_base__msg__BoundingBoxPoses__init(&msg->bbox)) {
    msg05_base__msg__SensorInfo__fini(msg);
    return false;
  }
  // driving
  if (!msg05_base__msg__DrivingPose__init(&msg->driving)) {
    msg05_base__msg__SensorInfo__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__msg__SensorInfo__fini(msg05_base__msg__SensorInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // state
  msg05_base__msg__PlatformState__fini(&msg->state);
  // bbox
  msg05_base__msg__BoundingBoxPoses__fini(&msg->bbox);
  // driving
  msg05_base__msg__DrivingPose__fini(&msg->driving);
}

bool
msg05_base__msg__SensorInfo__are_equal(const msg05_base__msg__SensorInfo * lhs, const msg05_base__msg__SensorInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // state
  if (!msg05_base__msg__PlatformState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // bbox
  if (!msg05_base__msg__BoundingBoxPoses__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // driving
  if (!msg05_base__msg__DrivingPose__are_equal(
      &(lhs->driving), &(rhs->driving)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__msg__SensorInfo__copy(
  const msg05_base__msg__SensorInfo * input,
  msg05_base__msg__SensorInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // state
  if (!msg05_base__msg__PlatformState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // bbox
  if (!msg05_base__msg__BoundingBoxPoses__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // driving
  if (!msg05_base__msg__DrivingPose__copy(
      &(input->driving), &(output->driving)))
  {
    return false;
  }
  return true;
}

msg05_base__msg__SensorInfo *
msg05_base__msg__SensorInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SensorInfo * msg = (msg05_base__msg__SensorInfo *)allocator.allocate(sizeof(msg05_base__msg__SensorInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__SensorInfo));
  bool success = msg05_base__msg__SensorInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__SensorInfo__destroy(msg05_base__msg__SensorInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__SensorInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__SensorInfo__Sequence__init(msg05_base__msg__SensorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SensorInfo * data = NULL;

  if (size) {
    data = (msg05_base__msg__SensorInfo *)allocator.zero_allocate(size, sizeof(msg05_base__msg__SensorInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__SensorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__SensorInfo__fini(&data[i - 1]);
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
msg05_base__msg__SensorInfo__Sequence__fini(msg05_base__msg__SensorInfo__Sequence * array)
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
      msg05_base__msg__SensorInfo__fini(&array->data[i]);
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

msg05_base__msg__SensorInfo__Sequence *
msg05_base__msg__SensorInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__SensorInfo__Sequence * array = (msg05_base__msg__SensorInfo__Sequence *)allocator.allocate(sizeof(msg05_base__msg__SensorInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__SensorInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__SensorInfo__Sequence__destroy(msg05_base__msg__SensorInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__SensorInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__SensorInfo__Sequence__are_equal(const msg05_base__msg__SensorInfo__Sequence * lhs, const msg05_base__msg__SensorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__SensorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__SensorInfo__Sequence__copy(
  const msg05_base__msg__SensorInfo__Sequence * input,
  msg05_base__msg__SensorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__SensorInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__SensorInfo * data =
      (msg05_base__msg__SensorInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__SensorInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__SensorInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__SensorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
