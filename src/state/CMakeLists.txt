file(GLOB SRC "./*.cpp")
add_executable(state ${SRC})
target_link_libraries(state PUBLIC GTest::gtest GTest::gtest_main)
