// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/Vector3F32.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/vector3_f32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg05_base__msg__Vector3F32__init(msg05_base__msg__Vector3F32 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
msg05_base__msg__Vector3F32__fini(msg05_base__msg__Vector3F32 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
msg05_base__msg__Vector3F32__are_equal(const msg05_base__msg__Vector3F32 * lhs, const msg05_base__msg__Vector3F32 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
msg05_base__msg__Vector3F32__copy(
  const msg05_base__msg__Vector3F32 * input,
  msg05_base__msg__Vector3F32 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

msg05_base__msg__Vector3F32 *
msg05_base__msg__Vector3F32__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Vector3F32 * msg = (msg05_base__msg__Vector3F32 *)allocator.allocate(sizeof(msg05_base__msg__Vector3F32), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__Vector3F32));
  bool success = msg05_base__msg__Vector3F32__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__Vector3F32__destroy(msg05_base__msg__Vector3F32 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__Vector3F32__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__Vector3F32__Sequence__init(msg05_base__msg__Vector3F32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Vector3F32 * data = NULL;

  if (size) {
    data = (msg05_base__msg__Vector3F32 *)allocator.zero_allocate(size, sizeof(msg05_base__msg__Vector3F32), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__Vector3F32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__Vector3F32__fini(&data[i - 1]);
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
msg05_base__msg__Vector3F32__Sequence__fini(msg05_base__msg__Vector3F32__Sequence * array)
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
      msg05_base__msg__Vector3F32__fini(&array->data[i]);
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

msg05_base__msg__Vector3F32__Sequence *
msg05_base__msg__Vector3F32__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Vector3F32__Sequence * array = (msg05_base__msg__Vector3F32__Sequence *)allocator.allocate(sizeof(msg05_base__msg__Vector3F32__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__Vector3F32__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__Vector3F32__Sequence__destroy(msg05_base__msg__Vector3F32__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__Vector3F32__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__Vector3F32__Sequence__are_equal(const msg05_base__msg__Vector3F32__Sequence * lhs, const msg05_base__msg__Vector3F32__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__Vector3F32__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__Vector3F32__Sequence__copy(
  const msg05_base__msg__Vector3F32__Sequence * input,
  msg05_base__msg__Vector3F32__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__Vector3F32);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__Vector3F32 * data =
      (msg05_base__msg__Vector3F32 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__Vector3F32__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__Vector3F32__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__Vector3F32__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
