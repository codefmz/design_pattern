file(GLOB SRC "./*.cpp")
add_executable(flyWight ${SRC})
target_link_libraries(flyWight PUBLIC GTest::gtest GTest::gtest_main)
