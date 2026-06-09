file(GLOB SRC "./*.cpp")
add_executable(template ${SRC})
target_link_libraries(template PUBLIC GTest::gtest GTest::gtest_main)
