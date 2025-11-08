#include <iostream>

int main () {
    int i1;
    std::cout << i1 << "\n"; //Garbage
    
    int i2 ();
    std::cout << i2 << "\n"; //Սա correct չի, որովհետև մենք էսպես կանչում ենք ֆունկցիա
    
    int i3 {};
    std::cout << i3 << "\n"; //0
    
    int i4 {2};
    std::cout << i4 << "\n"; //2
    
    int i5 (3);
    std::cout << i5 << "\n"; //3
    
    int i6 = 10;
    std::cout << i6 << "\n"; //10
    
    return 0;
}