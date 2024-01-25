// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg05_base:msg/OrderTopic.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__FUNCTIONS_H_
#define MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg05_base/msg/rosidl_generator_c__visibility_control.h"

#include "msg05_base/msg/detail/order_topic__struct.h"

/// Initialize msg/OrderTopic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg05_base__msg__OrderTopic
 * )) before or use
 * msg05_base__msg__OrderTopic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__init(msg05_base__msg__OrderTopic * msg);

/// Finalize msg/OrderTopic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
void
msg05_base__msg__OrderTopic__fini(msg05_base__msg__OrderTopic * msg);

/// Create msg/OrderTopic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg05_base__msg__OrderTopic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
msg05_base__msg__OrderTopic *
msg05_base__msg__OrderTopic__create();

/// Destroy msg/OrderTopic message.
/**
 * It calls
 * msg05_base__msg__OrderTopic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
void
msg05_base__msg__OrderTopic__destroy(msg05_base__msg__OrderTopic * msg);

/// Check for msg/OrderTopic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__are_equal(const msg05_base__msg__OrderTopic * lhs, const msg05_base__msg__OrderTopic * rhs);

/// Copy a msg/OrderTopic message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__copy(
  const msg05_base__msg__OrderTopic * input,
  msg05_base__msg__OrderTopic * output);

/// Initialize array of msg/OrderTopic messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg05_base__msg__OrderTopic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__Sequence__init(msg05_base__msg__OrderTopic__Sequence * array, size_t size);

/// Finalize array of msg/OrderTopic messages.
/**
 * It calls
 * msg05_base__msg__OrderTopic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
void
msg05_base__msg__OrderTopic__Sequence__fini(msg05_base__msg__OrderTopic__Sequence * array);

/// Create array of msg/OrderTopic messages.
/**
 * It allocates the memory for the array and calls
 * msg05_base__msg__OrderTopic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
msg05_base__msg__OrderTopic__Sequence *
msg05_base__msg__OrderTopic__Sequence__create(size_t size);

/// Destroy array of msg/OrderTopic messages.
/**
 * It calls
 * msg05_base__msg__OrderTopic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
void
msg05_base__msg__OrderTopic__Sequence__destroy(msg05_base__msg__OrderTopic__Sequence * array);

/// Check for msg/OrderTopic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__Sequence__are_equal(const msg05_base__msg__OrderTopic__Sequence * lhs, const msg05_base__msg__OrderTopic__Sequence * rhs);

/// Copy an array of msg/OrderTopic messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg05_base
bool
msg05_base__msg__OrderTopic__Sequence__copy(
  const msg05_base__msg__OrderTopic__Sequence * input,
  msg05_base__msg__OrderTopic__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__ORDER_TOPIC__FUNCTIONS_H_
