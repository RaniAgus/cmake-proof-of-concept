#include <stdlib.h>
#include "stringlist.h"

char *join_strings(char *accumulated, char *element) {
    if (string_equals_ignore_case(accumulated, "[")) {
        string_append(&accumulated, element);
    } else {
        string_append_with_format(&accumulated, ", %s", element);
    }
    return accumulated;
}

char *string_list_join(t_list *list) {
    char *result = list_fold(list, string_duplicate("["), (void *) join_strings);
    string_append(&result, "]");
    return result;
}
