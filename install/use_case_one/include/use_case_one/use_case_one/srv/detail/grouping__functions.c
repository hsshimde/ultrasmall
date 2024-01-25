// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice
#include "use_case_one/srv/detail/grouping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
use_case_one__srv__Grouping_Request__init(use_case_one__srv__Grouping_Request * msg)
{
  if (!msg) {
    return false;
  }
  // platform_id
  // is_leader
  // request_type
  // group_idx
  return true;
}

void
use_case_one__srv__Grouping_Request__fini(use_case_one__srv__Grouping_Request * msg)
{
  if (!msg) {
    return;
  }
  // platform_id
  // is_leader
  // request_type
  // group_idx
}

bool
use_case_one__srv__Grouping_Request__are_equal(const use_case_one__srv__Grouping_Request * lhs, const use_case_one__srv__Grouping_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // platform_id
  if (lhs->platform_id != rhs->platform_id) {
    return false;
  }
  // is_leader
  if (lhs->is_leader != rhs->is_leader) {
    return false;
  }
  // request_type
  if (lhs->request_type != rhs->request_type) {
    return false;
  }
  // group_idx
  if (lhs->group_idx != rhs->group_idx) {
    return false;
  }
  return true;
}

bool
use_case_one__srv__Grouping_Request__copy(
  const use_case_one__srv__Grouping_Request * input,
  use_case_one__srv__Grouping_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // platform_id
  output->platform_id = input->platform_id;
  // is_leader
  output->is_leader = input->is_leader;
  // request_type
  output->request_type = input->request_type;
  // group_idx
  output->group_idx = input->group_idx;
  return true;
}

use_case_one__srv__Grouping_Request *
use_case_one__srv__Grouping_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Request * msg = (use_case_one__srv__Grouping_Request *)allocator.allocate(sizeof(use_case_one__srv__Grouping_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(use_case_one__srv__Grouping_Request));
  bool success = use_case_one__srv__Grouping_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
use_case_one__srv__Grouping_Request__destroy(use_case_one__srv__Grouping_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    use_case_one__srv__Grouping_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
use_case_one__srv__Grouping_Request__Sequence__init(use_case_one__srv__Grouping_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Request * data = NULL;

  if (size) {
    data = (use_case_one__srv__Grouping_Request *)allocator.zero_allocate(size, sizeof(use_case_one__srv__Grouping_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = use_case_one__srv__Grouping_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        use_case_one__srv__Grouping_Request__fini(&data[i - 1]);
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
use_case_one__srv__Grouping_Request__Sequence__fini(use_case_one__srv__Grouping_Request__Sequence * array)
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
      use_case_one__srv__Grouping_Request__fini(&array->data[i]);
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

use_case_one__srv__Grouping_Request__Sequence *
use_case_one__srv__Grouping_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Request__Sequence * array = (use_case_one__srv__Grouping_Request__Sequence *)allocator.allocate(sizeof(use_case_one__srv__Grouping_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = use_case_one__srv__Grouping_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
use_case_one__srv__Grouping_Request__Sequence__destroy(use_case_one__srv__Grouping_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    use_case_one__srv__Grouping_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
use_case_one__srv__Grouping_Request__Sequence__are_equal(const use_case_one__srv__Grouping_Request__Sequence * lhs, const use_case_one__srv__Grouping_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!use_case_one__srv__Grouping_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
use_case_one__srv__Grouping_Request__Sequence__copy(
  const use_case_one__srv__Grouping_Request__Sequence * input,
  use_case_one__srv__Grouping_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(use_case_one__srv__Grouping_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    use_case_one__srv__Grouping_Request * data =
      (use_case_one__srv__Grouping_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!use_case_one__srv__Grouping_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          use_case_one__srv__Grouping_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!use_case_one__srv__Grouping_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
use_case_one__srv__Grouping_Response__init(use_case_one__srv__Grouping_Response * msg)
{
  if (!msg) {
    return false;
  }
  // platform_id
  // is_leader
  // reply_type
  // group_idx
  return true;
}

void
use_case_one__srv__Grouping_Response__fini(use_case_one__srv__Grouping_Response * msg)
{
  if (!msg) {
    return;
  }
  // platform_id
  // is_leader
  // reply_type
  // group_idx
}

bool
use_case_one__srv__Grouping_Response__are_equal(const use_case_one__srv__Grouping_Response * lhs, const use_case_one__srv__Grouping_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // platform_id
  if (lhs->platform_id != rhs->platform_id) {
    return false;
  }
  // is_leader
  if (lhs->is_leader != rhs->is_leader) {
    return false;
  }
  // reply_type
  if (lhs->reply_type != rhs->reply_type) {
    return false;
  }
  // group_idx
  if (lhs->group_idx != rhs->group_idx) {
    return false;
  }
  return true;
}

bool
use_case_one__srv__Grouping_Response__copy(
  const use_case_one__srv__Grouping_Response * input,
  use_case_one__srv__Grouping_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // platform_id
  output->platform_id = input->platform_id;
  // is_leader
  output->is_leader = input->is_leader;
  // reply_type
  output->reply_type = input->reply_type;
  // group_idx
  output->group_idx = input->group_idx;
  return true;
}

use_case_one__srv__Grouping_Response *
use_case_one__srv__Grouping_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Response * msg = (use_case_one__srv__Grouping_Response *)allocator.allocate(sizeof(use_case_one__srv__Grouping_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(use_case_one__srv__Grouping_Response));
  bool success = use_case_one__srv__Grouping_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
use_case_one__srv__Grouping_Response__destroy(use_case_one__srv__Grouping_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    use_case_one__srv__Grouping_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
use_case_one__srv__Grouping_Response__Sequence__init(use_case_one__srv__Grouping_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Response * data = NULL;

  if (size) {
    data = (use_case_one__srv__Grouping_Response *)allocator.zero_allocate(size, sizeof(use_case_one__srv__Grouping_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = use_case_one__srv__Grouping_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        use_case_one__srv__Grouping_Response__fini(&data[i - 1]);
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
use_case_one__srv__Grouping_Response__Sequence__fini(use_case_one__srv__Grouping_Response__Sequence * array)
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
      use_case_one__srv__Grouping_Response__fini(&array->data[i]);
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

use_case_one__srv__Grouping_Response__Sequence *
use_case_one__srv__Grouping_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  use_case_one__srv__Grouping_Response__Sequence * array = (use_case_one__srv__Grouping_Response__Sequence *)allocator.allocate(sizeof(use_case_one__srv__Grouping_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = use_case_one__srv__Grouping_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
use_case_one__srv__Grouping_Response__Sequence__destroy(use_case_one__srv__Grouping_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    use_case_one__srv__Grouping_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
use_case_one__srv__Grouping_Response__Sequence__are_equal(const use_case_one__srv__Grouping_Response__Sequence * lhs, const use_case_one__srv__Grouping_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!use_case_one__srv__Grouping_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
use_case_one__srv__Grouping_Response__Sequence__copy(
  const use_case_one__srv__Grouping_Response__Sequence * input,
  use_case_one__srv__Grouping_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(use_case_one__srv__Grouping_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    use_case_one__srv__Grouping_Response * data =
      (use_case_one__srv__Grouping_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!use_case_one__srv__Grouping_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          use_case_one__srv__Grouping_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!use_case_one__srv__Grouping_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
