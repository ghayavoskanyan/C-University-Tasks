#include <iostream>

int i = 10;

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

    std::cout << foo (value) << "\n" << foo2 () << std::endl;
    
    return 0;
}