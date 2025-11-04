#include "testMaior.hpp"

bool testMaior() {
    int a1[] = {3,1,4,2};        assert(maiorElemento(a1,4) == 4);
    int a2[] = {-5,-2,-9,-1};   assert(maiorElemento(a2,4) == -1);
    int a3[] = {7};             assert(maiorElemento(a3,1) == 7);
    int a4[] = {2,2,2};         assert(maiorElemento(a4,3) == 2);
    int empty[] = {};           assert(maiorElemento(empty,0) == 0);
    return true;
}