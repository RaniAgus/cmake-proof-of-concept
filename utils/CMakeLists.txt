# set project name and language
project(utils C)

# include own headers in this project and subprojects
include_directories(src)

# link libraries (commons is inherited from parent project)
link_libraries()

# find source files in src folder with *.c extension
file(GLOB_RECURSE SOURCES src/*.c)

# create a static library including all source files
add_library(${PROJECT_NAME} STATIC ${SOURCES})

# add test subproject
add_subdirectory(tests)
