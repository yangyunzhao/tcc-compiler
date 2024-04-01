cmake_minimum_required(VERSION 3.15)

# 设置项目名和使用的 C++ 标准
project(tcc LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置默认构建类型为 Debug
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug FORCE)
endif()

# 添加编译选项
if(MSVC)
  add_compile_options(/W3 /MP /utf-8)
else()
  add_compile_options(-Wall -Wextra)
endif()

# 添加 include 目录
include_directories(include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/catch2/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/spdlog-1.13.0/include)

# 添加 lib 目录
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/spdlog-1.13.0/lib)

# 创建 bin 和 log 目录（如果不存在）
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/log)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc)

# 在添加目标之前，为所有配置类型设置统一的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
    string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG_UPPER)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG_UPPER} ${CMAKE_CURRENT_SOURCE_DIR}/bin)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG_UPPER} ${CMAKE_CURRENT_SOURCE_DIR}/bin)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG_UPPER} ${CMAKE_CURRENT_SOURCE_DIR}/bin)
endforeach()

# 添加主程序
file(GLOB DRIVER_SRC "source/driver/*.cpp")
file(GLOB DRIVER_HDR "include/driver/*.h")
add_executable(tcc ${DRIVER_SRC} ${DRIVER_HDR})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${DRIVER_SRC} ${DRIVER_HDR})