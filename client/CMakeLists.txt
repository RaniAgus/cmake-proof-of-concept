project(client C)

link_libraries(commons readline)

add_executable(${PROJECT_NAME}
        src/client.c
        src/utils.c)
