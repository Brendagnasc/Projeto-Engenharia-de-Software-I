#include <iostream>
#include <cassert>
#include "bib.hpp"

int main() {
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(5) == 120);
    std::cout << "Fatorial: testes OK\n";
    return 0;
}
