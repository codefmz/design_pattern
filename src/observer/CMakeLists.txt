file(GLOB SRC "./*.cpp")
add_executable(observer ${SRC})
target_link_libraries(observer PUBLIC GTest::gtest GTest::gtest_main)
