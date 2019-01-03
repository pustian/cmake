http://www.hahack.com/codes/cmake/
1, Demo0 单文本 
2, Demo1 同一目录，多个文件 
3, Demo2 多目录，多个文件 
3, Demo3 自定义编译选项
4, Demo4 可以指定安装规则
5, Demo5 为工程添加测试 
    make test
6, Demo6 生成安装包 
    生成二进制安装包：
    cpack -C CPackConfig.cmake  
    生成源码安装包
    cpack -C CPackSourceConfig.cmake
    执行安装
    sh Demo8-1.0.1-Linux.sh 
7, 添加环境检查, 为提供示例
8, Version 版本

.
├── Demo0
│   ├── CMakeLists.txt
│   ├── Demo0_main.cc
│   └── README.md
├── Demo1
│   ├── CMakeLists.txt
│   ├── Demo1.cc
│   ├── Demo1_main.cc
│   └── README.md
├── Demo2
│   ├── CMakeLists.txt
│   ├── Demo2_main.cc
│   └── sub
│       ├── CMakeLists.txt
│       ├── Demo2.cc
│       └── Demo2.h
├── Demo3
│   ├── CMakeLists.txt
│   ├── config.h.in
│   ├── Demo3_main.cc
│   └── sub
│       ├── CMakeLists.txt
│       ├── Demo3.cc
│       └── Demo3.h
├── Demo4
│   ├── CMakeLists.txt
│   ├── Demo4_main.cc
│   └── sub
│       ├── CMakeLists.txt
│       ├── Demo4.cc
│       └── Demo4.h
├── Demo5
│   ├── CMakeLists.txt
│   ├── Demo5_main.cc
│   └── sub
│       ├── CMakeLists.txt
│       ├── Demo5.cc
│       └── Demo5.h
├── Demo6
│   ├── CMakeLists.txt
│   ├── Demo6_main.cc
│   ├── LICENSE.txt
│   └── sub
│       ├── CMakeLists.txt
│       ├── Demo6.cc
│       ├── Demo6.h
│       └── LICENSE.txt
├── Version
│   ├── CMakeLists.txt
│   ├── main.cc
│   └── version
│       ├── CMakeLists.txt
│       ├── version.cc
│       └── version.h.in
└── README.md

#########################################################################
cmake中一些预定义变量

PROJECT_SOURCE_DIR 工程的根目录
PROJECT_BINARY_DIR 运行cmake命令的目录,通常是${PROJECT_SOURCE_DIR}/build
CMAKE_INCLUDE_PATH 环境变量,非cmake变量
CMAKE_LIBRARY_PATH 环境变量
CMAKE_CURRENT_SOURCE_DIR 当前处理的CMakeLists.txt所在的路径
CMAKE_CURRENT_BINARY_DIR target编译目录
使用ADD_SURDIRECTORY(src bin)可以更改此变量的值
SET(EXECUTABLE_OUTPUT_PATH <新路径>)并不会对此变量有影响,只是改变了最终目标文件的存储路径
CMAKE_CURRENT_LIST_FILE 输出调用这个变量的CMakeLists.txt的完整路径
CMAKE_CURRENT_LIST_LINE 输出这个变量所在的行
CMAKE_MODULE_PATH 定义自己的cmake模块所在的路径
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake),然后可以用INCLUDE命令来调用自己的模块
EXECUTABLE_OUTPUT_PATH 重新定义目标二进制可执行文件的存放位置
LIBRARY_OUTPUT_PATH 重新定义目标链接库文件的存放位置
PROJECT_NAME 返回通过PROJECT指令定义的项目名称
CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS 用来控制IF ELSE语句的书写方式
