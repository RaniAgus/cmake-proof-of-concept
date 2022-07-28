# set project name and language
project(utils_tests CXX)

# add compilation flags for test coverage
# add_compile_options(--coverage)

# link libraries (commons is inherited from parent project)
# link_libraries(gcov)

# find test files with *.cpp extension
file(GLOB_RECURSE TESTS *.cpp)

# create an executable including all source and test files
# (sources are inherited from parent project)
add_executable(${PROJECT_NAME} ${TESTS} ${SOURCES})
