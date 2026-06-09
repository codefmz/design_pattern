file(GLOB SRC "./*.cpp")
add_executable(strategy ${SRC})
target_link_libraries(strategy PUBLIC GTest::gtest GTest::gtest_main)
