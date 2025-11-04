#include "bib.hpp"

//Implementação inicial simples
long long fatorial(int n) {
   if (n <= 1) return 1;
   long long r = 1;
   for (int i = 2; i <= n; ++i) r*= i;
   return r;
}

int maiorElemento(int arr[], int n) {
   if (n <= 0) return 0;
   int mx = arr[0]; 
   for (int i = 1; i < n; ++i) if (arr[i] > mx) mx = arr[i];
   return mx;
}
