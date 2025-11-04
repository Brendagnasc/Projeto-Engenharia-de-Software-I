#include "testFatorial.hpp"
#include "testMaior.hpp"
#include <iostream>

using namespace std;

int main(void) {
    if (testFatorial()) {
        cout << "All tests from Fatorial() passed!" << endl;
    } 
    
    if(testMaior()) {
        cout << "All tests from MaiorElemento() passed!" << endl;
    }
    
    return 0;

}