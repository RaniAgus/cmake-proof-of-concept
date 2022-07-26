project(server C)

link_libraries(commons)

add_executable(${PROJECT_NAME}
        src/server.c
        src/utils.c)
