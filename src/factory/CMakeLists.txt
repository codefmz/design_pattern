file(GLOB SRC "./*.cpp")
add_executable(factory ${SRC})
target_link_libraries(factory PUBLIC GTest::gtest GTest::gtest_main)
