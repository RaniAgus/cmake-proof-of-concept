# PROJECT
# -------

## set project name and language
project(utils)

## store a list with all source files in a variable
set(SOURCES src/utils/joining.c)

## create a static library including all source files
add_library(${PROJECT_NAME} STATIC ${SOURCES})

## link libraries only to the project target (commons has already been linked globally)
target_link_libraries(${PROJECT_NAME} )

# TESTS
# -----

## include doctest/v2.4.9 using FetchContent module
include(FetchContent)
FetchContent_Declare(doctest GIT_REPOSITORY https://github.com/doctest/doctest GIT_TAG v2.4.9)
FetchContent_MakeAvailable(doctest)

## exclude files named "main" from sources (that doesn't affect previous target)
list(FILTER SOURCES EXCLUDE REGEX "main")

## store a list with all test files in a variable
set(TESTS tests/utils/joining_test.cpp)

## create an executable including all source and test files
add_executable(${PROJECT_NAME}_tests ${TESTS} ${SOURCES})

## include own header paths into the project target (utils/src has already been linked globally)
target_include_directories(${PROJECT_NAME}_tests PUBLIC tests)

## link libraries only to the test target (commons has already been linked globally)
target_link_libraries(${PROJECT_NAME}_tests doctest::doctest)

## add doctest configuration headers
target_compile_definitions(${PROJECT_NAME}_tests PRIVATE
        DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
        DOCTEST_CONFIG_USE_STD_HEADERS)
