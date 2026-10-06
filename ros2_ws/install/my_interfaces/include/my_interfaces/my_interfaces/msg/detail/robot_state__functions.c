// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `battery_state`
#include "sensor_msgs/msg/detail/battery_state__functions.h"

bool
my_interfaces__msg__RobotState__init(my_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // current_state
  // battery_state
  if (!sensor_msgs__msg__BatteryState__init(&msg->battery_state)) {
    my_interfaces__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
my_interfaces__msg__RobotState__fini(my_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // current_state
  // battery_state
  sensor_msgs__msg__BatteryState__fini(&msg->battery_state);
}

bool
my_interfaces__msg__RobotState__are_equal(const my_interfaces__msg__RobotState * lhs, const my_interfaces__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_state
  if (lhs->current_state != rhs->current_state) {
    return false;
  }
  // battery_state
  if (!sensor_msgs__msg__BatteryState__are_equal(
      &(lhs->battery_state), &(rhs->battery_state)))
  {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__RobotState__copy(
  const my_interfaces__msg__RobotState * input,
  my_interfaces__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // current_state
  output->current_state = input->current_state;
  // battery_state
  if (!sensor_msgs__msg__BatteryState__copy(
      &(input->battery_state), &(output->battery_state)))
  {
    return false;
  }
  return true;
}

my_interfaces__msg__RobotState *
my_interfaces__msg__RobotState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__RobotState * msg = (my_interfaces__msg__RobotState *)allocator.allocate(sizeof(my_interfaces__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__RobotState));
  bool success = my_interfaces__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__RobotState__destroy(my_interfaces__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__RobotState__Sequence__init(my_interfaces__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__RobotState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(my_interfaces__msg__RobotState)) {
      return false;
    }
    data = (my_interfaces__msg__RobotState *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__RobotState__fini(&data[i - 1]);
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
my_interfaces__msg__RobotState__Sequence__fini(my_interfaces__msg__RobotState__Sequence * array)
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
      my_interfaces__msg__RobotState__fini(&array->data[i]);
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

my_interfaces__msg__RobotState__Sequence *
my_interfaces__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__RobotState__Sequence * array = (my_interfaces__msg__RobotState__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__RobotState__Sequence__destroy(my_interfaces__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__RobotState__Sequence__are_equal(const my_interfaces__msg__RobotState__Sequence * lhs, const my_interfaces__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__RobotState__Sequence__copy(
  const my_interfaces__msg__RobotState__Sequence * input,
  my_interfaces__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(my_interfaces__msg__RobotState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__RobotState * data =
      (my_interfaces__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
