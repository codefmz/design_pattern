file(GLOB SRC "./*.cpp")
add_executable(visit ${SRC})
target_link_libraries(visit PUBLIC GTest::gtest GTest::gtest_main)
