file(GLOB SRC "./*.cpp")
add_executable(mediator ${SRC})
target_link_libraries(mediator PUBLIC GTest::gtest GTest::gtest_main)