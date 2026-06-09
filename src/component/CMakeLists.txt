file(GLOB SRC "./*.cpp")
add_executable(component ${SRC})
target_link_libraries(component PUBLIC GTest::gtest GTest::gtest_main)
