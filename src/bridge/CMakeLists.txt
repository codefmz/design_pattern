file(GLOB SRC "./*.cpp")

add_executable(bridge ${SRC})
target_link_libraries(bridge PUBLIC GTest::gtest GTest::gtest_main)