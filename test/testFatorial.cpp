#include "testFatorial.hpp"

bool testFatorial() {
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(5) == 120);

    return true;
}

