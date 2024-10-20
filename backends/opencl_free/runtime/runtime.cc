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

#include "runtime.h"

#include "opencldnn.h"

void InitPlugin(CustomRuntimeParams *params) {
    std::cout << "OpenCL Free Plugin for Paddle." << std::endl;
    std::cout << "Commercialization is prohibited" << std::endl;

    PADDLE_CUSTOM_RUNTIME_CHECK_VERSION(params);

    const std::string DEVICE_TYPE = "OpenCLFree";
    const std::string SUB_DEVICE_TYPE = "v0.1";

    // 填充 Runtime 基本信息
    params->device_type = (char*)DEVICE_TYPE.data();
    params->sub_device_type = (char*)SUB_DEVICE_TYPE.data();

    // 注册 Runtime API
    params->interface->set_device = PaddleOpenCLFreeRuntime::set_device;
    params->interface->get_device = PaddleOpenCLFreeRuntime::get_device;

    opencldnnInit();
}

C_Status PaddleOpenCLFreeRuntime::set_device(const C_Device device) {

}