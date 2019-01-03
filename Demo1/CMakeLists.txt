# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Demo1)

# # # 查找当前目录下的所有源文件 并将名称保存到 DIR_SRCS 变量
# # aux_source_directory(. DIR_SRCS)
# 
# # 类似上步骤效果
# set(DIR_SRCS
# Demo1.cc
# Demo1_main.cc
# )
# 
# # 指定生成目标
# add_executable(Demo1 ${DIR_SRCS} )

# 指定生成目标
add_executable(Demo1 Demo1.cc Demo1_main.cc )
