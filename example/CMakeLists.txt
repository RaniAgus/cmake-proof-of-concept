# PROJECT
# -------

## set project name and language
project(example)

## store a list with all source files in a variable
set(SOURCES src/main.c)

## create an executable target including all source files
add_executable(${PROJECT_NAME} ${SOURCES})

## include own header paths into the project target (utils/src has already been linked globally)
target_include_directories(${PROJECT_NAME} PUBLIC src)

## link libraries only to the project target (commons has already been linked globally)
target_link_libraries(${PROJECT_NAME} readline utils)
