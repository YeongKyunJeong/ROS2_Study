// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/ArithmeticArguments.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/arithmetic_arguments.h"


#ifndef MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArithmeticArguments in the package my_interfaces.
/**
  * my_interfaces/msg/ArithmeticArguments.msg
 */
typedef struct my_interfaces__msg__ArithmeticArguments
{
  float argument_a;
  float argument_b;
} my_interfaces__msg__ArithmeticArguments;

// Struct for a sequence of my_interfaces__msg__ArithmeticArguments.
typedef struct my_interfaces__msg__ArithmeticArguments__Sequence
{
  my_interfaces__msg__ArithmeticArguments * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__ArithmeticArguments__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__ARITHMETIC_ARGUMENTS__STRUCT_H_
