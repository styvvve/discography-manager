#include <cassert>

#include "../include/operatorOverloading.hpp"

void test_deleting_space() {
    std::string const word { " test " };

    std::string const word_copy { delete_space(word) };

    assert(word_copy == "test" && "test shouldn't have space");
}

int main() {
    test_deleting_space();

    return 0;
}