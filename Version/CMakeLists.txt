# 项目信息
project (VERSION)

# Hypertable version components
set(VERSION_MAJOR "0")
set(VERSION_MINOR "1")
set(VERSION_MICRO "2")
set(VERSION_PATCH "3")
set(VERSION_MISC_SUFFIX  "release")

# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 使用头文件
include_directories ( ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})

# CMake中使用C++11
add_definitions(-std=c++11)

# 使用头文件
add_subdirectory(version)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标 
add_executable(app main.cc)

# 使用命令 target_link_libraries 指明可执行文件 main 需要连接一个名为 Functions 的链接库 
# 添加链接库
target_link_libraries(app sub_version_libs)

