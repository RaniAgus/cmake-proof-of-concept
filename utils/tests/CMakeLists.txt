# set project name and language
project(utils_tests CXX)

# include doctest/v2.4.9 using FetchContent module
include(FetchContent)
FetchContent_Declare(doctest GIT_REPOSITORY https://github.com/doctest/doctest GIT_TAG v2.4.9)
FetchContent_MakeAvailable(doctest)

# link libraries (commons is inherited from parent project)
link_libraries(doctest::doctest)

# find test files with *.cpp extension
file(GLOB_RECURSE TESTS *.cpp)

# exclude files named "main" from sources inherited from parent project
list(FILTER SOURCES EXCLUDE REGEX "main")

# create an executable including all source and test files
add_executable(${PROJECT_NAME} ${TESTS} ${SOURCES})

# add doctest configuration headers
target_compile_definitions(${PROJECT_NAME} PRIVATE
        DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
        DOCTEST_CONFIG_USE_STD_HEADERS)
