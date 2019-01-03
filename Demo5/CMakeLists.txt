# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Demo5)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 math 子目录, 这样目录下的CMakeLists.txt 和源码也会处理
add_subdirectory(sub)

# 指定生成目标 
add_executable(Demo5 Demo5_main.cc)

# 使用命令 target_link_libraries 指明可执行文件 main 需要连接一个名为 Functions 的链接库 
# 添加链接库
target_link_libraries(Demo5 Functions)

# 测试程序是否成功运行
add_test (test_run Demo5)
# 启用测试
enable_testing()
# 测试程序是否成功运行
add_test (test_run Demo5)
# 测试帮助信息是否可以正常提示
add_test (test_run_args Demo5 "tianpusen")
set_tests_properties (test_run_args 
      PROPERTIES PASS_REGULAR_EXPRESSION "function message: hello tianpusen")


