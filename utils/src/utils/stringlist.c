#include <stdlib.h>
#include "stringlist.h"

char *join_strings(char *accumulated, char *element) {
    char *result;
    if (string_is_empty(accumulated)) {
        result = string_duplicate(element);
    } else {
        result = string_from_format("%s, %s", accumulated, element);
    }
    free(accumulated);
    return result;
}

char *string_list_join(t_list *list) {
    return list_fold(list, string_new(), (void *(*)(void *, void *)) join_strings);
}
