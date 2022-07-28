#include "joining.h"

char *merge_strings(char *accumulated, char *element) {
    if (string_equals_ignore_case(accumulated, "[")) {
        string_append(&accumulated, element);
    } else {
        string_append_with_format(&accumulated, ", %s", element);
    }
    return accumulated;
}

char *join_string_list(t_list *list) {
    char *result = list_fold(list, string_duplicate("["), (void *) merge_strings);
    string_append(&result, "]");
    return result;
}
