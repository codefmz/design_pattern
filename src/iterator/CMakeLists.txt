file(GLOB SRC "./*.cpp")

add_executable(iterator ${SRC})
target_link_libraries(iterator PUBLIC GTest::gtest GTest::gtest_main)
