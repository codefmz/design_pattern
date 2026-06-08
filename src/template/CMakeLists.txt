file(GLOB SRC "./*.cpp")

add_library(libtemplate STATIC ${SRC})
target_link_libraries(libtemplate PUBLIC GTest::gtest)

set_target_properties(libtemplate  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
