# 项目信息
project (Demo6)

set(VERSION_MAJOR "0")
set(VERSION_MINOR "1")
set(VERSION_MICRO "2")

# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 math 子目录, 这样目录下的CMakeLists.txt 和源码也会处理
add_subdirectory(sub)

# 指定生成目标 
add_executable(Demo6 Demo6_main.cc)

# 使用命令 target_link_libraries 指明可执行文件 main 需要连接一个名为 Functions 的链接库 
# 添加链接库
target_link_libraries(Demo6 Functions)

# 指定安装路径 --prefix
install (TARGETS Demo6 DESTINATION bin)

# 构建一个 CPack 安装包
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE
    "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${VERSION_MINOR}")
set (CPACK_PACKAGE_VERSION_MICRO "${VERSION_MICRO}")
include (CPack)

