// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/driving_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "msg05_base/msg/detail/driving_pose__functions.h"
// Member `linear`
// Member `angular`
#include "msg05_base/msg/detail/vector3_f32__functions.h"
// Member `formation`
#include "msg05_base/msg/detail/point_i16__functions.h"

bool
msg05_base__msg__DrivingTarget__init(msg05_base__msg__DrivingTarget * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!msg05_base__msg__DrivingPose__init(&msg->pose)) {
    msg05_base__msg__DrivingTarget__fini(msg);
    return false;
  }
  // linear
  if (!msg05_base__msg__Vector3F32__init(&msg->linear)) {
    msg05_base__msg__DrivingTarget__fini(msg);
    return false;
  }
  // angular
  if (!msg05_base__msg__Vector3F32__init(&msg->angular)) {
    msg05_base__msg__DrivingTarget__fini(msg);
    return false;
  }
  // formation
  if (!msg05_base__msg__PointI16__Sequence__init(&msg->formation, 0)) {
    msg05_base__msg__DrivingTarget__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__msg__DrivingTarget__fini(msg05_base__msg__DrivingTarget * msg)
{
  if (!msg) {
    return;
  }
  // pose
  msg05_base__msg__DrivingPose__fini(&msg->pose);
  // linear
  msg05_base__msg__Vector3F32__fini(&msg->linear);
  // angular
  msg05_base__msg__Vector3F32__fini(&msg->angular);
  // formation
  msg05_base__msg__PointI16__Sequence__fini(&msg->formation);
}

bool
msg05_base__msg__DrivingTarget__are_equal(const msg05_base__msg__DrivingTarget * lhs, const msg05_base__msg__DrivingTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!msg05_base__msg__DrivingPose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // linear
  if (!msg05_base__msg__Vector3F32__are_equal(
      &(lhs->linear), &(rhs->linear)))
  {
    return false;
  }
  // angular
  if (!msg05_base__msg__Vector3F32__are_equal(
      &(lhs->angular), &(rhs->angular)))
  {
    return false;
  }
  // formation
  if (!msg05_base__msg__PointI16__Sequence__are_equal(
      &(lhs->formation), &(rhs->formation)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__msg__DrivingTarget__copy(
  const msg05_base__msg__DrivingTarget * input,
  msg05_base__msg__DrivingTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!msg05_base__msg__DrivingPose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // linear
  if (!msg05_base__msg__Vector3F32__copy(
      &(input->linear), &(output->linear)))
  {
    return false;
  }
  // angular
  if (!msg05_base__msg__Vector3F32__copy(
      &(input->angular), &(output->angular)))
  {
    return false;
  }
  // formation
  if (!msg05_base__msg__PointI16__Sequence__copy(
      &(input->formation), &(output->formation)))
  {
    return false;
  }
  return true;
}

msg05_base__msg__DrivingTarget *
msg05_base__msg__DrivingTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__DrivingTarget * msg = (msg05_base__msg__DrivingTarget *)allocator.allocate(sizeof(msg05_base__msg__DrivingTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__DrivingTarget));
  bool success = msg05_base__msg__DrivingTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__DrivingTarget__destroy(msg05_base__msg__DrivingTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__DrivingTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__DrivingTarget__Sequence__init(msg05_base__msg__DrivingTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__DrivingTarget * data = NULL;

  if (size) {
    data = (msg05_base__msg__DrivingTarget *)allocator.zero_allocate(size, sizeof(msg05_base__msg__DrivingTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__DrivingTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__DrivingTarget__fini(&data[i - 1]);
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
msg05_base__msg__DrivingTarget__Sequence__fini(msg05_base__msg__DrivingTarget__Sequence * array)
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
      msg05_base__msg__DrivingTarget__fini(&array->data[i]);
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

msg05_base__msg__DrivingTarget__Sequence *
msg05_base__msg__DrivingTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__DrivingTarget__Sequence * array = (msg05_base__msg__DrivingTarget__Sequence *)allocator.allocate(sizeof(msg05_base__msg__DrivingTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__DrivingTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__DrivingTarget__Sequence__destroy(msg05_base__msg__DrivingTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__DrivingTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__DrivingTarget__Sequence__are_equal(const msg05_base__msg__DrivingTarget__Sequence * lhs, const msg05_base__msg__DrivingTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__DrivingTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__DrivingTarget__Sequence__copy(
  const msg05_base__msg__DrivingTarget__Sequence * input,
  msg05_base__msg__DrivingTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__DrivingTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__DrivingTarget * data =
      (msg05_base__msg__DrivingTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__DrivingTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__DrivingTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__DrivingTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
