cmake_minimum_required(VERSION 3.5.0)
project(cppcore VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
#specify whether the chosen C++ standard must be strictly adhered to by the compiler
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

link_directories(
    # ${PROJECT_SOURCE_DIR}/lib
    ${PROJECT_SOURCE_DIR}/lib/msvc
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

message(STATUS "CMAKE: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "MY_OPTION = ${TARGET}")

add_subdirectory(src)
# add_executable(${TARGET} main.cpp)
# target_link_libraries(${TARGET} gtest lib${TARGET})
# #强制链接动态库，避免main函数没有使用，然后编译器优化，没有带上这个
# target_link_options(${TARGET} PRIVATE "/WHOLEARCHIVE:lib${TARGET}.lib")
# add_custom_command(TARGET ${TARGET}
#     COMMAND echo "compile ${TARGET} test finish!!!"
# )