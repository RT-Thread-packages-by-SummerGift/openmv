/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013-2016 Kwabena W. Agyeman <kwagyeman@openmv.io>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * File System Helper Functions
 *
 */
#include <mp.h>
#include "common.h"
#include "fb_alloc.h"
#include "ff_wrapper.h"
#define FF_MIN(x,y) (((x)<(y))?(x):(y))
