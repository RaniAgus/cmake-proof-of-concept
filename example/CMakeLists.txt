# PROJECT
# -------

## set project name and language
project(example)

## include own and utils headers in this project and subprojects
include_directories(src ../utils/src)

## link libraries (commons is inherited from parent project)
link_libraries(readline utils)

## store a list with all source files in a variable
set(SOURCES src/main.c)

## create an executable including all source files
add_executable(${PROJECT_NAME} ${SOURCES})
