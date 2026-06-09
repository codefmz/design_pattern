file(GLOB SRC "./*.cpp")
add_executable(commander ${SRC})
target_link_libraries(commander PUBLIC GTest::gtest GTest::gtest_main)