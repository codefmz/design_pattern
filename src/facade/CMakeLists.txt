file(GLOB SRC "./*.cpp")

add_library(libfacade STATIC ${SRC})
target_link_libraries(libfacade PUBLIC GTest::gtest)

set_target_properties(libfacade  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
