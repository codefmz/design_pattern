file(GLOB SRC "./*.cpp")
add_executable(simple_factory ${SRC})
target_link_libraries(simple_factory PUBLIC GTest::gtest GTest::gtest_main)
