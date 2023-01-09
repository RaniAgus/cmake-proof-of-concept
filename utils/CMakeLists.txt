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

## include cspecs using FetchContent module
include(FetchContent)
FetchContent_Declare(cspecs GIT_REPOSITORY https://github.com/mumuki/cspec)
FetchContent_MakeAvailable(cspecs)

## exclude files named "main" from sources (that doesn't affect previous target)
list(FILTER SOURCES EXCLUDE REGEX "main")

## store a list with all test files in a variable
set(TESTS tests/utils/joining_test.c)

## create an executable including all source and test files
add_executable(${PROJECT_NAME}_tests ${TESTS} ${SOURCES})

## include own header paths into the project target (utils/src has already been linked globally)
target_include_directories(${PROJECT_NAME}_tests PUBLIC tests ${cspecs_SOURCE_DIR})

## link libraries only to the test target (commons has already been linked globally)
target_link_libraries(${PROJECT_NAME}_tests cspecs)

## add a test to be run with ctest
add_test(NAME ${PROJECT_NAME}_tests COMMAND ./${PROJECT_NAME}_tests)
add_test(NAME ${PROJECT_NAME}_tests_with_valgrind COMMAND valgrind
        --leak-check=full
        --error-exitcode=1
        --track-origins=yes
        ./${PROJECT_NAME}_tests)
