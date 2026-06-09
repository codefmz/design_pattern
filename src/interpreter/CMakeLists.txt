file(GLOB SRC "./*.cpp")
add_executable(interpreter ${SRC})
target_link_libraries(interpreter PUBLIC GTest::gtest GTest::gtest_main)
