#include <iostream>

class B {
public:
    int value;

    B (int v = 0) : value (v) {
        std::cout << "Constructor called, value = " << value << "\n";
    }
};

int main () {
    B b; //0
    
    B b2 (b); //0 
    B b3 = b; //0
    //Այս 2-ը նույն բանն են ու համարվում են կոնստրուկտորի կանչ

    b2 = 3; //3
    //Իսկ սա վերագրում է

    std::cout << "b.value = " << b.value << "\n"; //0
    std::cout << "b2.value = " << b2.value << "\n"; //3
    std::cout << "b3.value = " << b3.value << "\n"; //0

    return 0;
}