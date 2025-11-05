#include <iostream>
#include <cassert> 

int main () {
    size_t x = 6;
    size_t y = 2;

    assert (y != 0);

    size_t z = x / y;
    std::cout << z << std::endl;

    return 0;
}