// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/ArithmeticArguments.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/arithmetic_arguments__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_interfaces__msg__ArithmeticArguments__init(my_interfaces__msg__ArithmeticArguments * msg)
{
  if (!msg) {
    return false;
  }
  // argument_a
  // argument_b
  return true;
}

void
my_interfaces__msg__ArithmeticArguments__fini(my_interfaces__msg__ArithmeticArguments * msg)
{
  if (!msg) {
    return;
  }
  // argument_a
  // argument_b
}

bool
my_interfaces__msg__ArithmeticArguments__are_equal(const my_interfaces__msg__ArithmeticArguments * lhs, const my_interfaces__msg__ArithmeticArguments * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // argument_a
  if (lhs->argument_a != rhs->argument_a) {
    return false;
  }
  // argument_b
  if (lhs->argument_b != rhs->argument_b) {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__ArithmeticArguments__copy(
  const my_interfaces__msg__ArithmeticArguments * input,
  my_interfaces__msg__ArithmeticArguments * output)
{
  if (!input || !output) {
    return false;
  }
  // argument_a
  output->argument_a = input->argument_a;
  // argument_b
  output->argument_b = input->argument_b;
  return true;
}

my_interfaces__msg__ArithmeticArguments *
my_interfaces__msg__ArithmeticArguments__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__ArithmeticArguments * msg = (my_interfaces__msg__ArithmeticArguments *)allocator.allocate(sizeof(my_interfaces__msg__ArithmeticArguments), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__ArithmeticArguments));
  bool success = my_interfaces__msg__ArithmeticArguments__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__ArithmeticArguments__destroy(my_interfaces__msg__ArithmeticArguments * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__ArithmeticArguments__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__ArithmeticArguments__Sequence__init(my_interfaces__msg__ArithmeticArguments__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__ArithmeticArguments * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(my_interfaces__msg__ArithmeticArguments)) {
      return false;
    }
    data = (my_interfaces__msg__ArithmeticArguments *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__ArithmeticArguments), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__ArithmeticArguments__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__ArithmeticArguments__fini(&data[i - 1]);
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
my_interfaces__msg__ArithmeticArguments__Sequence__fini(my_interfaces__msg__ArithmeticArguments__Sequence * array)
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
      my_interfaces__msg__ArithmeticArguments__fini(&array->data[i]);
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

my_interfaces__msg__ArithmeticArguments__Sequence *
my_interfaces__msg__ArithmeticArguments__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__ArithmeticArguments__Sequence * array = (my_interfaces__msg__ArithmeticArguments__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__ArithmeticArguments__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__ArithmeticArguments__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__ArithmeticArguments__Sequence__destroy(my_interfaces__msg__ArithmeticArguments__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__ArithmeticArguments__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__ArithmeticArguments__Sequence__are_equal(const my_interfaces__msg__ArithmeticArguments__Sequence * lhs, const my_interfaces__msg__ArithmeticArguments__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__ArithmeticArguments__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__ArithmeticArguments__Sequence__copy(
  const my_interfaces__msg__ArithmeticArguments__Sequence * input,
  my_interfaces__msg__ArithmeticArguments__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(my_interfaces__msg__ArithmeticArguments)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__ArithmeticArguments);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__ArithmeticArguments * data =
      (my_interfaces__msg__ArithmeticArguments *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__ArithmeticArguments__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__ArithmeticArguments__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__ArithmeticArguments__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
