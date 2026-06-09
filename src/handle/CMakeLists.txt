file(GLOB SRC "./*.cpp")
add_executable(handle ${SRC})
target_link_libraries(handle PUBLIC GTest::gtest GTest::gtest_main)
