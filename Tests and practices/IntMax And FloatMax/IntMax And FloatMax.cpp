#include <iostream>
#include <limits>

int main () {
    std::cout << "INT_MAX = " << std::numeric_limits <int>::max () << std::endl;
    std::cout << "FLOAT_MAX = " << std::numeric_limits <float>::max () << std::endl;

    //FLOAT_MAX > INT_MAX
}