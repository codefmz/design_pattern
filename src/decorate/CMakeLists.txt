file(GLOB SRC "./*.cpp")
add_executable(decorate ${SRC})
target_link_libraries(decorate PUBLIC GTest::gtest GTest::gtest_main)