## set project name and language
project(utils)

## store a list with all source files in a variable
set(SOURCES src/utils/joining.c)

## create a static library including all source files
add_library(${PROJECT_NAME} STATIC ${SOURCES})

## link libraries only to the project target (commons has already been linked globally)
target_link_libraries(${PROJECT_NAME} )
