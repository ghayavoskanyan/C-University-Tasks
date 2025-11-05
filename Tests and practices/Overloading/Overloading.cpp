#include <iostream>

int sum (int, int);

int sum (int, int, int);

double sum (double, double);

int main () {
    std::cout << sum (5, 10) << "\n" << sum (5.5, 9.2) << "\n" << sum (5, 9, 10) << std::endl;
    
    return 0;
}

int sum (int val1, int val2) {
    return val1 + val2;
}

int sum (int val1, int val2, int val3) {
    return val1 + val2 + val3;
}

double sum (double val1, double val2) {
    return val1 + val2;
}