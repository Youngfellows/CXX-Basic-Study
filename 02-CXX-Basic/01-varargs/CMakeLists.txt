# cmake最小版本
cmake_minimum_required(VERSION 3.25)

# 声明C语言项目与项目版本
# project(buffer VERSION 1.0 LANGUAGES C)
project(01_varargs VERSION 1.0 LANGUAGES C CXX)

# C语言标准C99
# set(CMAKE_C_STANDARD 99)
# set(CMAKE_C_EXTENSIONS OFF)
# set(CMAKE_C_STANDARD_REQUIRED ON)

# C语言标准C11
set(CMAKE_C_STANDARD 11)

# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -O2 -std=c11")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++0x")

# 使用C++ 11标准
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -g -Wall -O2 -std=c++11")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")

# 使用C++ 11标准
set(CMAKE_CXX_STANDARD 11)

# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_EXTENSIONS OFF)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 告诉CMake在何处构建可执行、静态和动态库目标。便于在用户不打算安装项目的情况下，访问这些构建目标。
# 这里使用标准CMake的GNUInstallDirs.cmake模块。这将确保的项目布局的合理性和可移植性
include(GNUInstallDirs)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# 设置头文件包含目录
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

# 声明可执行目标
# set(TARGET_NAME ${CMAKE_PROJECT_NAME})
set(TARGET_NAME ${CMAKE_PROJECT_NAME})
add_executable(${TARGET_NAME})

# 为动态库设置源文件列表
target_sources(${TARGET_NAME}
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VariableArgument.cpp
)

# 安装可执行目标
install(TARGETS ${TARGET_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
