file(GLOB SRC "./*.cpp")
add_executable(adapter ${SRC})
target_link_libraries(adapter PUBLIC GTest::gtest)