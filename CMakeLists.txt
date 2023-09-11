#-------生成编译文件
cmake_minimum_required(VERSION 2.6)
project(Test)
set(SRC_LIST main.cpp)
set(CMAKE_BUILD_TYPE Release)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(main src/main.cpp) #生成可执行文件(.exe)
