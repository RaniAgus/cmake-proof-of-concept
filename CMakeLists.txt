# set cmake version
cmake_minimum_required(VERSION 3.22)

# set project name
project(cmake-proof-of-concept)

# set c standard and flags globally (recommended)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Werror")

# set c++ standard and flags globally (recommended)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wno-write-strings")

# link libraries globally
link_libraries(commons)

# add subprojects
add_subdirectory(example)
add_subdirectory(utils)
