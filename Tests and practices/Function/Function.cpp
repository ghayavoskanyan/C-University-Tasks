#include <iostream>

int sum (int, int);

int main () {
    std::cout << sum (5, 10) << std::endl;
    
    return 0;
}

int sum (int val1, int val2) {
    return val1 + val2;
}