file(GLOB SRC "./*.cpp")

add_library(libhandle STATIC ${SRC})
target_link_libraries(libhandle PUBLIC GTest::gtest)

set_target_properties(libhandle PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
