#include <iostream>

enum EyeColor {
    Brown,
    Blue,
    Green = 6,
    Gray,
    Other
};

int main () {
    EyeColor EyeColor1 = Brown;
    EyeColor EyeColor2 = Other;
    
    std::cout << EyeColor1 << "\n"; //0
    std::cout << EyeColor2 << "\n"; //8
    
    return 0;
}