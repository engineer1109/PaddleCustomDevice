//
// Created by wjl on 2024/10/21.
//

#pragma once

enum OpenCLError {
    OpenCLSuccess = 0,
    OpenCLFailure = 1,
};

enum OpenCLMemcpyKind {
    OpenCLMemcpyHostToHost = 0,
    OpenCLMemcpyHostToDevice = 1,
    OpenCLMemcpyDeviceToHost = 2,
    OpenCLMemcpyDeviceToDevice = 3,
};

