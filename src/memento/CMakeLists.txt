file(GLOB SRC "./*.cpp")
add_executable(memento ${SRC})
target_link_libraries(memento PUBLIC GTest::gtest GTest::gtest_main)