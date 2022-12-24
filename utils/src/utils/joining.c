#include "joining.h"

char *join_string_list(t_list *list) {
    if (list_is_empty(list)) {
        return string_duplicate("[]");
    }

    char *merge_strings(char *accumulated, char *element) {
        char* prefix = string_is_empty(accumulated) ? "[" : ", ";
        string_append_with_format(&accumulated, "%s%s", prefix, element);
        return accumulated;
    }

    char *result = list_fold(list, string_new(), (void *) merge_strings);
    string_append(&result, "]");

    return result;
}
