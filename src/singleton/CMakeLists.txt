file(GLOB SRC "./*.cpp")
add_executable(singleton ${SRC})
target_link_libraries(singleton PUBLIC GTest::gtest)