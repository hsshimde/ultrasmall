// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg05_base:srv/PlatformRegistrationInfo.idl
// generated code does not contain a copyright notice
#include "msg05_base/srv/detail/platform_registration_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `registration`
#include "msg05_base/msg/detail/platform_registration__functions.h"

bool
msg05_base__srv__PlatformRegistrationInfo_Request__init(msg05_base__srv__PlatformRegistrationInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // registration
  if (!msg05_base__msg__PlatformRegistration__init(&msg->registration)) {
    msg05_base__srv__PlatformRegistrationInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__srv__PlatformRegistrationInfo_Request__fini(msg05_base__srv__PlatformRegistrationInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // registration
  msg05_base__msg__PlatformRegistration__fini(&msg->registration);
}

bool
msg05_base__srv__PlatformRegistrationInfo_Request__are_equal(const msg05_base__srv__PlatformRegistrationInfo_Request * lhs, const msg05_base__srv__PlatformRegistrationInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // registration
  if (!msg05_base__msg__PlatformRegistration__are_equal(
      &(lhs->registration), &(rhs->registration)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__srv__PlatformRegistrationInfo_Request__copy(
  const msg05_base__srv__PlatformRegistrationInfo_Request * input,
  msg05_base__srv__PlatformRegistrationInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // registration
  if (!msg05_base__msg__PlatformRegistration__copy(
      &(input->registration), &(output->registration)))
  {
    return false;
  }
  return true;
}

msg05_base__srv__PlatformRegistrationInfo_Request *
msg05_base__srv__PlatformRegistrationInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Request * msg = (msg05_base__srv__PlatformRegistrationInfo_Request *)allocator.allocate(sizeof(msg05_base__srv__PlatformRegistrationInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__srv__PlatformRegistrationInfo_Request));
  bool success = msg05_base__srv__PlatformRegistrationInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__srv__PlatformRegistrationInfo_Request__destroy(msg05_base__srv__PlatformRegistrationInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__srv__PlatformRegistrationInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__init(msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Request * data = NULL;

  if (size) {
    data = (msg05_base__srv__PlatformRegistrationInfo_Request *)allocator.zero_allocate(size, sizeof(msg05_base__srv__PlatformRegistrationInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__srv__PlatformRegistrationInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__srv__PlatformRegistrationInfo_Request__fini(&data[i - 1]);
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
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__fini(msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * array)
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
      msg05_base__srv__PlatformRegistrationInfo_Request__fini(&array->data[i]);
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

msg05_base__srv__PlatformRegistrationInfo_Request__Sequence *
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * array = (msg05_base__srv__PlatformRegistrationInfo_Request__Sequence *)allocator.allocate(sizeof(msg05_base__srv__PlatformRegistrationInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__destroy(msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__are_equal(const msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * lhs, const msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__srv__PlatformRegistrationInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__srv__PlatformRegistrationInfo_Request__Sequence__copy(
  const msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * input,
  msg05_base__srv__PlatformRegistrationInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__srv__PlatformRegistrationInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__srv__PlatformRegistrationInfo_Request * data =
      (msg05_base__srv__PlatformRegistrationInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__srv__PlatformRegistrationInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__srv__PlatformRegistrationInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__srv__PlatformRegistrationInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "std_msgs/msg/detail/bool__functions.h"

bool
msg05_base__srv__PlatformRegistrationInfo_Response__init(msg05_base__srv__PlatformRegistrationInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__init(&msg->result)) {
    msg05_base__srv__PlatformRegistrationInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg05_base__srv__PlatformRegistrationInfo_Response__fini(msg05_base__srv__PlatformRegistrationInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  std_msgs__msg__Bool__fini(&msg->result);
}

bool
msg05_base__srv__PlatformRegistrationInfo_Response__are_equal(const msg05_base__srv__PlatformRegistrationInfo_Response * lhs, const msg05_base__srv__PlatformRegistrationInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
msg05_base__srv__PlatformRegistrationInfo_Response__copy(
  const msg05_base__srv__PlatformRegistrationInfo_Response * input,
  msg05_base__srv__PlatformRegistrationInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!std_msgs__msg__Bool__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

msg05_base__srv__PlatformRegistrationInfo_Response *
msg05_base__srv__PlatformRegistrationInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Response * msg = (msg05_base__srv__PlatformRegistrationInfo_Response *)allocator.allocate(sizeof(msg05_base__srv__PlatformRegistrationInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg05_base__srv__PlatformRegistrationInfo_Response));
  bool success = msg05_base__srv__PlatformRegistrationInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg05_base__srv__PlatformRegistrationInfo_Response__destroy(msg05_base__srv__PlatformRegistrationInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg05_base__srv__PlatformRegistrationInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__init(msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Response * data = NULL;

  if (size) {
    data = (msg05_base__srv__PlatformRegistrationInfo_Response *)allocator.zero_allocate(size, sizeof(msg05_base__srv__PlatformRegistrationInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg05_base__srv__PlatformRegistrationInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg05_base__srv__PlatformRegistrationInfo_Response__fini(&data[i - 1]);
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
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__fini(msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * array)
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
      msg05_base__srv__PlatformRegistrationInfo_Response__fini(&array->data[i]);
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

msg05_base__srv__PlatformRegistrationInfo_Response__Sequence *
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * array = (msg05_base__srv__PlatformRegistrationInfo_Response__Sequence *)allocator.allocate(sizeof(msg05_base__srv__PlatformRegistrationInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__destroy(msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__are_equal(const msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * lhs, const msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg05_base__srv__PlatformRegistrationInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg05_base__srv__PlatformRegistrationInfo_Response__Sequence__copy(
  const msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * input,
  msg05_base__srv__PlatformRegistrationInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg05_base__srv__PlatformRegistrationInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg05_base__srv__PlatformRegistrationInfo_Response * data =
      (msg05_base__srv__PlatformRegistrationInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg05_base__srv__PlatformRegistrationInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg05_base__srv__PlatformRegistrationInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg05_base__srv__PlatformRegistrationInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
