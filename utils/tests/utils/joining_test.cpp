#include <doctest/doctest.h>
#include <string>

extern "C" {
#include "utils/joining.h"
}

TEST_SUITE("Joining") {
    t_list *ayudantes;
    char *result;

    TEST_CASE("List of strings") {
        ayudantes = list_create();

        SUBCASE("Should join an empty list") {
            result = join_string_list(ayudantes);
            REQUIRE_EQ(result, "[]");
        }

        list_add(ayudantes, string_duplicate("Agustin"));

        SUBCASE("Should join a list with one element") {
            result = join_string_list(ayudantes);
            REQUIRE_EQ(result, "[Agustin]");
        }

        list_add(ayudantes, string_duplicate("Damian"));
        list_add(ayudantes, string_duplicate("Dario"));
        list_add(ayudantes, string_duplicate("Juan"));

        SUBCASE("Should join a list with multiple elements") {
            result = join_string_list(ayudantes);
            REQUIRE_EQ(result, "[Agustin, Damian, Dario, Juan]");
        }

        list_destroy_and_destroy_elements(ayudantes, free);
        free(result);
    }
}
