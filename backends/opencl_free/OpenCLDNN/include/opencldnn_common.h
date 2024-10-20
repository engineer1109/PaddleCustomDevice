//
// Created by wjl on 2024/10/21.
//

#ifndef OPENDNN_COMMON_H
#define OPENDNN_COMMON_H

#if defined(__unix__) || !defined(__CYGWIN__)
#define OPENCLDNN_EXPORT __attribute__((visibility("default")))

#define OPENCLDNN_IMPORT __attribute__((visibility("default")))
#elif defined(WIN32) || defined(__CYGWIN__)
#define OPENCLDNN_EXPORT  __declspec(dllexport)

#define OPENCLDNN_IMPORT  __declspec(dllimport)
#else
#define OPENCLDNN_EXPORT

#define OPENCLDNN_IMPORT
#endif

#endif //OPENDNN_COMMON_H
