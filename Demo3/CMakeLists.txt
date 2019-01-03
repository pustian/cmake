# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Demo3)


# 加入一个配置头文件，用于处理 CMake 对源码的设置
configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)
# 使用头文件
include_directories ( ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})

# 是否使用自己的 Function 库
option (USE_LOCAL_TEST 
    "use local test" ON)
# 是否需要sub 中代码
if (USE_LOCAL_TEST )
    include_directories("${PROJECT_SOURCE_DIR}/sub")
    add_subdirectory(sub)
    set (EXTERNAL_LIBS ${EXTERNAL_LIBS} Functions)
endif (USE_LOCAL_TEST )

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标 
add_executable(Demo3 Demo3_main.cc)

# 使用命令 target_link_libraries 指明可执行文件 main 需要连接一个名为 Functions 的链接库 
# 添加链接库
target_link_libraries(Demo3 ${EXTERNAL_LIBS})

