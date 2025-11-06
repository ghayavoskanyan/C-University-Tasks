#include <iostream>

int main () {
    double a = 5.0;
    double b = 0.0;
    
    double c = a / b;
    std::cout << c << "\n"; //inf
    
    double d = -a / b;
    std::cout << d << "\n"; //-inf
    
    double e = 0.0 / 0.0; 
    std::cout << e << "\n"; //-nan

    return 0;
}