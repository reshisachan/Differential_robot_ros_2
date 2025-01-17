// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from realsense2_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice
#include "realsense2_camera_msgs/msg/detail/extrinsics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
realsense2_camera_msgs__msg__Extrinsics__init(realsense2_camera_msgs__msg__Extrinsics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    realsense2_camera_msgs__msg__Extrinsics__fini(msg);
    return false;
  }
  // rotation
  // translation
  return true;
}

void
realsense2_camera_msgs__msg__Extrinsics__fini(realsense2_camera_msgs__msg__Extrinsics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rotation
  // translation
}

realsense2_camera_msgs__msg__Extrinsics *
realsense2_camera_msgs__msg__Extrinsics__create()
{
  realsense2_camera_msgs__msg__Extrinsics * msg = (realsense2_camera_msgs__msg__Extrinsics *)malloc(sizeof(realsense2_camera_msgs__msg__Extrinsics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__msg__Extrinsics));
  bool success = realsense2_camera_msgs__msg__Extrinsics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__msg__Extrinsics__destroy(realsense2_camera_msgs__msg__Extrinsics * msg)
{
  if (msg) {
    realsense2_camera_msgs__msg__Extrinsics__fini(msg);
  }
  free(msg);
}


bool
realsense2_camera_msgs__msg__Extrinsics__Sequence__init(realsense2_camera_msgs__msg__Extrinsics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  realsense2_camera_msgs__msg__Extrinsics * data = NULL;
  if (size) {
    data = (realsense2_camera_msgs__msg__Extrinsics *)calloc(size, sizeof(realsense2_camera_msgs__msg__Extrinsics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__msg__Extrinsics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__msg__Extrinsics__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
realsense2_camera_msgs__msg__Extrinsics__Sequence__fini(realsense2_camera_msgs__msg__Extrinsics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__msg__Extrinsics__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

realsense2_camera_msgs__msg__Extrinsics__Sequence *
realsense2_camera_msgs__msg__Extrinsics__Sequence__create(size_t size)
{
  realsense2_camera_msgs__msg__Extrinsics__Sequence * array = (realsense2_camera_msgs__msg__Extrinsics__Sequence *)malloc(sizeof(realsense2_camera_msgs__msg__Extrinsics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__msg__Extrinsics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__msg__Extrinsics__Sequence__destroy(realsense2_camera_msgs__msg__Extrinsics__Sequence * array)
{
  if (array) {
    realsense2_camera_msgs__msg__Extrinsics__Sequence__fini(array);
  }
  free(array);
}
