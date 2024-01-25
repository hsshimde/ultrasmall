// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:msg/Image.idl
// generated code does not contain a copyright notice
#include "msg05_base/msg/detail/image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
msg05_base__msg__Image__init(msg05_base__msg__Image * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // timestamp
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    msg05_base__msg__Image__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__msg__Image__fini(msg05_base__msg__Image * msg)
{
  if (!msg) {
    return;
  }
  // id
  // timestamp
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
msg05_base__msg__Image__are_equal(const msg05_base__msg__Image * lhs, const msg05_base__msg__Image * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__msg__Image__copy(
  const msg05_base__msg__Image * input,
  msg05_base__msg__Image * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // timestamp
  output->timestamp = input->timestamp;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

msg05_base__msg__Image *
msg05_base__msg__Image__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Image * msg = (msg05_base__msg__Image *)allocator.allocate(sizeof(msg05_base__msg__Image), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__msg__Image));
  bool success = msg05_base__msg__Image__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__msg__Image__destroy(msg05_base__msg__Image * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__msg__Image__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__msg__Image__Sequence__init(msg05_base__msg__Image__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Image * data = NULL;

  if (size) {
    data = (msg05_base__msg__Image *)allocator.zero_allocate(size, sizeof(msg05_base__msg__Image), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__msg__Image__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__msg__Image__fini(&data[i - 1]);
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
msg05_base__msg__Image__Sequence__fini(msg05_base__msg__Image__Sequence * array)
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
      msg05_base__msg__Image__fini(&array->data[i]);
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

msg05_base__msg__Image__Sequence *
msg05_base__msg__Image__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__msg__Image__Sequence * array = (msg05_base__msg__Image__Sequence *)allocator.allocate(sizeof(msg05_base__msg__Image__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__msg__Image__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__msg__Image__Sequence__destroy(msg05_base__msg__Image__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__msg__Image__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__msg__Image__Sequence__are_equal(const msg05_base__msg__Image__Sequence * lhs, const msg05_base__msg__Image__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__msg__Image__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__msg__Image__Sequence__copy(
  const msg05_base__msg__Image__Sequence * input,
  msg05_base__msg__Image__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__msg__Image);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__msg__Image * data =
      (msg05_base__msg__Image *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__msg__Image__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__msg__Image__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__msg__Image__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
