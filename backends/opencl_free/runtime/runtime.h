// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PADDLE_OPENCL_FREE_RUNTIME_H
#define PADDLE_OPENCL_FREE_RUNTIME_H

#include <errno.h>
#include <fcntl.h>
#include <semaphore.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>

#include "paddle/phi/backends/device_ext.h"

class PaddleOpenCLFreeRuntime {
public:
    static C_Status set_device(const C_Device device);

    static C_Status get_device(const C_Device device);

    static C_Status get_device_count(size_t *count);

    static C_Status get_device_list(size_t *device);

    static C_Status memory_copy_h2d(const C_Device device, void *dst, const void *src, size_t size);

    static C_Status memory_copy_d2d(const C_Device device, void *dst, const void *src, size_t size);

    static C_Status memory_copy_d2h(const C_Device device, void *dst, const void *src, size_t size);

};

#endif //PADDLE_OPENCL_FREE_RUNTIME_H
