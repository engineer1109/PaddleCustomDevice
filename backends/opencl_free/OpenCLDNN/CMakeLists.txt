project(OpenCLDNN)

if (NOT CL_TARGET_OPENCL_VERSION)
    add_definitions(-DCL_TARGET_OPENCL_VERSION=220)
else()
    add_definitions(-DCL_TARGET_OPENCL_VERSION=${CL_TARGET_OPENCL_VERSION})
endif ()

include_directories(${PROJECT_SOURCE_DIR}/include)
message("${PROJECT_SOURCE_DIR}/include")

add_subdirectory(source)