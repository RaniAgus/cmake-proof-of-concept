# set project name and language
project(example C)

# include own and utils headers in this project and subprojects
include_directories(src ../utils/src)

# link libraries (commons is inherited from parent project)
link_libraries(readline utils)

# find source files in src folder with *.c extension
file(GLOB_RECURSE SOURCES src/*.c)

# create an executable including all source files
add_executable(${PROJECT_NAME} ${SOURCES})
