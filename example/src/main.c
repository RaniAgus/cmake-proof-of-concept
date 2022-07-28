#include <readline/readline.h>
#include <stdlib.h>
#include <utils/joining.h>

#define PROMPT "> "

t_list *read_lines();
void print_lines(t_list *list);

int main() {
    t_list *list = read_lines();
    print_lines(list);
    list_destroy_and_destroy_elements(list, free);
    return 0;
}

t_list *read_lines() {
    t_list *list = list_create();
    char *line = readline(PROMPT);
    while (!string_is_empty(line)) {
        list_add(list, line);
        line = readline(PROMPT);
    }
    free(line);
    return list;
}

void print_lines(t_list *list) {
    char *result = join_string_list(list);
    puts(result);
    free(result);
}
