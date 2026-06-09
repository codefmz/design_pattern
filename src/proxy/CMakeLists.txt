file(GLOB SRC "./*.cpp")
add_executable(proxy ${SRC})
target_link_libraries(proxy PUBLIC GTest::gtest GTest::gtest_main)
