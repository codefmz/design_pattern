file(GLOB SRC "./*.cpp")

add_library(libproxy STATIC ${SRC})
target_link_libraries(libproxy PUBLIC GTest::gtest)

set_target_properties(libproxy PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
