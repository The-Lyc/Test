add_library(BpTree STATIC BPlusTreeStruct.cpp Insert.cpp Delete.cpp)
target_include_directories(BpTree PRIVATE ${CMAKE_SOURCE_DIR}/include)