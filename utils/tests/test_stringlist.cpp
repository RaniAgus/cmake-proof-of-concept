#include <doctest.h>
#include <string>

extern "C" {
#include "utils/stringlist.h"
}

using std::string;

TEST_SUITE("List of strings") {
    t_list *ayudantes;
    char *result;

    TEST_CASE("Joining") {
        ayudantes = list_create();

        SUBCASE("Should join an empty list") {
            result = string_list_join(ayudantes);
            REQUIRE_EQ(string(result), "[]");
        }

        list_add(ayudantes, string_duplicate("Agustin"));

        SUBCASE("Should join a list with one element") {
            result = string_list_join(ayudantes);
            REQUIRE_EQ(string(result), "[Agustin]");
        }

        list_add(ayudantes, string_duplicate("Damian"));
        list_add(ayudantes, string_duplicate("Dario"));
        list_add(ayudantes, string_duplicate("Juan"));

        SUBCASE("Should join a list with multiple elements") {
            result = string_list_join(ayudantes);
            REQUIRE_EQ(string(result), "[Agustin, Damian, Dario, Juan]");
        }

        list_destroy_and_destroy_elements(ayudantes, free);
        free(result);
    }
}
