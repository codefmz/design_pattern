file(GLOB SRC "./*.cpp")
add_executable(prototype ${SRC})
target_link_libraries(prototype PUBLIC GTest::gtest GTest::gtest_main)
