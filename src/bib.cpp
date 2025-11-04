#include "bib.hpp"

//Implementação inicial simples
long long fatorial(int n) {
   if (n <= 1) return 1;
   long long r = 1;
   for (int i = 2; i <= n; ++i) r*= i;
   return r;
}

