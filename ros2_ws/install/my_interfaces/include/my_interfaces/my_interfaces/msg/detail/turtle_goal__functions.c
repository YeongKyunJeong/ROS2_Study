// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/TurtleGoal.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/turtle_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtle_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `goal_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
my_interfaces__msg__TurtleGoal__init(my_interfaces__msg__TurtleGoal * msg)
{
  if (!msg) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__init(&msg->turtle_name)) {
    my_interfaces__msg__TurtleGoal__fini(msg);
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__init(&msg->goal_point)) {
    my_interfaces__msg__TurtleGoal__fini(msg);
    return false;
  }
  // speed
  return true;
}

void
my_interfaces__msg__TurtleGoal__fini(my_interfaces__msg__TurtleGoal * msg)
{
  if (!msg) {
    return;
  }
  // turtle_name
  rosidl_runtime_c__String__fini(&msg->turtle_name);
  // goal_point
  geometry_msgs__msg__Point__fini(&msg->goal_point);
  // speed
}

bool
my_interfaces__msg__TurtleGoal__are_equal(const my_interfaces__msg__TurtleGoal * lhs, const my_interfaces__msg__TurtleGoal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->turtle_name), &(rhs->turtle_name)))
  {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__TurtleGoal__copy(
  const my_interfaces__msg__TurtleGoal * input,
  my_interfaces__msg__TurtleGoal * output)
{
  if (!input || !output) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__copy(
      &(input->turtle_name), &(output->turtle_name)))
  {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  return true;
}

my_interfaces__msg__TurtleGoal *
my_interfaces__msg__TurtleGoal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__TurtleGoal * msg = (my_interfaces__msg__TurtleGoal *)allocator.allocate(sizeof(my_interfaces__msg__TurtleGoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__TurtleGoal));
  bool success = my_interfaces__msg__TurtleGoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__TurtleGoal__destroy(my_interfaces__msg__TurtleGoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__TurtleGoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__TurtleGoal__Sequence__init(my_interfaces__msg__TurtleGoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__TurtleGoal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(my_interfaces__msg__TurtleGoal)) {
      return false;
    }
    data = (my_interfaces__msg__TurtleGoal *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__TurtleGoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__TurtleGoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__TurtleGoal__fini(&data[i - 1]);
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
my_interfaces__msg__TurtleGoal__Sequence__fini(my_interfaces__msg__TurtleGoal__Sequence * array)
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
      my_interfaces__msg__TurtleGoal__fini(&array->data[i]);
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

my_interfaces__msg__TurtleGoal__Sequence *
my_interfaces__msg__TurtleGoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__TurtleGoal__Sequence * array = (my_interfaces__msg__TurtleGoal__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__TurtleGoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__TurtleGoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__TurtleGoal__Sequence__destroy(my_interfaces__msg__TurtleGoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__TurtleGoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__TurtleGoal__Sequence__are_equal(const my_interfaces__msg__TurtleGoal__Sequence * lhs, const my_interfaces__msg__TurtleGoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__TurtleGoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__TurtleGoal__Sequence__copy(
  const my_interfaces__msg__TurtleGoal__Sequence * input,
  my_interfaces__msg__TurtleGoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(my_interfaces__msg__TurtleGoal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__TurtleGoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__TurtleGoal * data =
      (my_interfaces__msg__TurtleGoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__TurtleGoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__TurtleGoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__TurtleGoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
