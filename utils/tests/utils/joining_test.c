#include "utils/joining.h"
#include <stdlib.h>
#include <cspecs/cspec.h>

context (joining) {
    t_list *ayudantes;
    char *result;

    describe ("List of strings") {
        before {
            ayudantes = list_create();
        } end

        after {
            list_destroy_and_destroy_elements(ayudantes, free);
            free(result);
        } end

        it ("Should join an empty list") {
            result = join_string_list(ayudantes);
            should_string(result) be equal to ("[]");
        } end


        it ("Should join a list with one element") {
            list_add(ayudantes, string_duplicate("Agustin"));

            result = join_string_list(ayudantes);
            should_string(result) be equal to ("[Agustin]");
        } end

        it ("Should join a list with multiple elements") {
            list_add(ayudantes, string_duplicate("Agustin"));
            list_add(ayudantes, string_duplicate("Damian"));
            list_add(ayudantes, string_duplicate("Dario"));
            list_add(ayudantes, string_duplicate("Juan"));

            result = join_string_list(ayudantes);
            should_string(result) be equal to ("[Agustin, Damian, Dario, Juan]");
        } end
    } end
}
