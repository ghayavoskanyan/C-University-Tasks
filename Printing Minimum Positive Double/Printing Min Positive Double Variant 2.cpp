#include <iostream>
#include <cstdint>

int main () {
    uint64_t n = 1;
    double x = *reinterpret_cast <double*> (&n);
    
    std::cout<< x << std::endl;
    return 0;
}