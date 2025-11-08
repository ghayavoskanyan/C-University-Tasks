#include <iostream>

int i; //Global Variable
// Gloval Variables Are By Default 0

int foo (int val) {
    while (i < 100) {
        i += val;
    }

    return i;
}

int foo2 () {
    i += 20;
    return i;
}

int main () {
    int value = 20;

    std::cout << i << "\n"; //0 -> This is the by default value of global variables
    std::cout << foo (value) << "\n"; //100
    std::cout << foo2 () << std::endl; //120
    
    return 0;
}