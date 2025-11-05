#include <iostream>
#include <cstring>

union Data {
    int i;
    float f;
    char str[10];
};

int main () {
    Data data;
    
    data.i = 42;
    std::cout << "Int: " << data.i << "\n";

    data.f = 3.14;
    std::cout << "Float: " << data.f << "\n";

    strcpy (data.str, "Hi");
    std::cout << "String: " << data.str << "\n";

    std::cout << "Size of union: " << sizeof (data) << " bytes\n";

    return 0;
}