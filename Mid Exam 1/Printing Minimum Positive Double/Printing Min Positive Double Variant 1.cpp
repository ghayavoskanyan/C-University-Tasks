#include <iostream>
#include <iomanip>

int main () {
    unsigned long long bits = 1; //ամենափոքր դրական double-ի bit pattern
    double d = *reinterpret_cast <double*> (&bits);

    std::cout << std::setprecision (20);
    std::cout << d << std::endl; //կտպի 4.9406564584124654e-324
    return 0;
}