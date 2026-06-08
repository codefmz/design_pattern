file(GLOB SRC "./*.cpp")

add_library(libobserver STATIC ${SRC})
target_link_libraries(libobserver PUBLIC GTest::gtest)

set_target_properties(libobserver  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
