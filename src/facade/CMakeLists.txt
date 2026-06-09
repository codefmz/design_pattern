file(GLOB SRC "./*.cpp")
add_executable(facade ${SRC})
target_link_libraries(facade PUBLIC GTest::gtest GTest::gtest_main)
