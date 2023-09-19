add_executable(main main.cpp)
add_executable(test test.cpp)
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/include)