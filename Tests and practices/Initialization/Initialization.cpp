#include <iostream>

int main () {
    int a = 10; 
    std::cout << a << "\n"; //10

    int b (20); 
    std::cout << b << "\n"; //20

    int c {30}; 
    std::cout << c << "\n"; //30
    
    return 0;
}