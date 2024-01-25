// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/BoundingBoxPos.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/bounding_box_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bbox`
#include "msg05_base/msg/detail/rect__functions.h"
// Member `position`
#include "msg05_base/msg/detail/vector3_i16__functions.h"
// Member `class_id`
#include "rosidl_runtime_c/string_functions.h"

bool
msg05_base__msg__BoundingBoxPos__init(msg05_base__msg__BoundingBoxPos * msg)
{
  if (!msg) {
    return false;
  }
  // probability_percent
  // bbox
  if (!msg05_base__msg__Rect__init(&msg->bbox)) {
    msg05_base__msg__BoundingBoxPos__fini(msg);
    return false;
  }
  // position
  if (!msg05_base__msg__Vector3I16__init(&msg->position)) {
    msg05_base__msg__BoundingBoxPos__fini(msg);
    return false;
  }
  // class_id
  if (!rosidl_runtime_c__String__init(&msg->class_id)) {
    msg05_base__msg__BoundingBoxPos__fini(msg);
    return false;
  }
  // time
  return true;
}

void
msg05_base__msg__BoundingBoxPos__fini(msg05_base__msg__BoundingBoxPos * msg)
{
  if (!msg) {
    return;
  }
  // probability_percent
  // bbox
  msg05_base__msg__Rect__fini(&msg->bbox);
  // position
  msg05_base__msg__Vector3I16__fini(&msg->position);
  // class_id
  rosidl_runtime_c__String__fini(&msg->class_id);
  // time
}

bool
msg05_base__msg__BoundingBoxPos__are_equal(const msg05_base__msg__BoundingBoxPos * lhs, const msg05_base__msg__BoundingBoxPos * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // probability_percent
  if (lhs->probability_percent != rhs->probability_percent) {
    return false;
  }
  // bbox
  if (!msg05_base__msg__Rect__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // position
  if (!msg05_base__msg__Vector3I16__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // class_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_id), &(rhs->class_id)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  return true;
}

bool
msg05_base__msg__BoundingBoxPos__copy(
  const msg05_base__msg__BoundingBoxPos * input,
  msg05_base__msg__BoundingBoxPos * output)
{
  if (!input || !output) {
    return false;
  }
  // probability_percent
  output->probability_percent = input->probability_percent;
  // bbox
  if (!msg05_base__msg__Rect__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // position
  if (!msg05_base__msg__Vector3I16__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // class_id
  if (!rosidl_runtime_c__String__copy(
      &(input->class_id), &(output->class_id)))
  {
    return false;
  }
  // time
  output->time = input->time;
  return true;
}

msg05_base__msg__BoundingBoxPos *
msg05_base__msg__BoundingBoxPos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__BoundingBoxPos * msg = (msg05_base__msg__BoundingBoxPos *)allocator.allocate(sizeof(msg05_base__msg__BoundingBoxPos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__BoundingBoxPos));
  bool success = msg05_base__msg__BoundingBoxPos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__BoundingBoxPos__destroy(msg05_base__msg__BoundingBoxPos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__BoundingBoxPos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__BoundingBoxPos__Sequence__init(msg05_base__msg__BoundingBoxPos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__BoundingBoxPos * data = NULL;

  if (size) {
    data = (msg05_base__msg__BoundingBoxPos *)allocator.zero_allocate(size, sizeof(msg05_base__msg__BoundingBoxPos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__BoundingBoxPos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__BoundingBoxPos__fini(&data[i - 1]);
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
msg05_base__msg__BoundingBoxPos__Sequence__fini(msg05_base__msg__BoundingBoxPos__Sequence * array)
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
      msg05_base__msg__BoundingBoxPos__fini(&array->data[i]);
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

msg05_base__msg__BoundingBoxPos__Sequence *
msg05_base__msg__BoundingBoxPos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__BoundingBoxPos__Sequence * array = (msg05_base__msg__BoundingBoxPos__Sequence *)allocator.allocate(sizeof(msg05_base__msg__BoundingBoxPos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__BoundingBoxPos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__BoundingBoxPos__Sequence__destroy(msg05_base__msg__BoundingBoxPos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__BoundingBoxPos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__BoundingBoxPos__Sequence__are_equal(const msg05_base__msg__BoundingBoxPos__Sequence * lhs, const msg05_base__msg__BoundingBoxPos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__BoundingBoxPos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__BoundingBoxPos__Sequence__copy(
  const msg05_base__msg__BoundingBoxPos__Sequence * input,
  msg05_base__msg__BoundingBoxPos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__BoundingBoxPos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__BoundingBoxPos * data =
      (msg05_base__msg__BoundingBoxPos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__BoundingBoxPos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__BoundingBoxPos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__BoundingBoxPos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
