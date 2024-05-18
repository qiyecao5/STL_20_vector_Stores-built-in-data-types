cmake_minimum_required(VERSION 3.29.0) # 这个就是设置你cmake所需要的最小版本
project(vector-test)  # 就是你这个项目的名字
set(CMAKE_CXX_STANDARD 11) # 指定C++的标准在11以及以上

# 添加全局的头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 把动态库和exe都指定到bin目录下面
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)  
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)  

set(SRC_LISTS  
    # ${PROJECT_SOURCE_DIR}/src/main.cpp  
    ${PROJECT_SOURCE_DIR}/src/2_vector存放自定义数据类.cpp
    # ... 其他源文件 ...  
)

# 生成外面的可执行文件
add_executable(${PROJECT_NAME} ${SRC_LISTS})