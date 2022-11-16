# set cmake version
cmake_minimum_required(VERSION 3.22)

# set project name
project(cmake-proof-of-concept)

# set c standard and flags globally (recommended)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Werror")

# link libraries globally
link_libraries(commons)

# include header paths globally
include_directories(utils/src)

# add subprojects
add_subdirectory(example)
add_subdirectory(utils)
