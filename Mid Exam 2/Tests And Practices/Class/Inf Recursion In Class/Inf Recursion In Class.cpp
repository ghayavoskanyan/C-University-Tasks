#include <iostream>

class B {
public:
    int value = 0;

    B () {
        std::cout << "Hello From Default Constructor!\n";
    }

    B (B& obj) {
        std::cout << "Hello From Copy Constructor!\n";
        B b (obj); //Recursion
    }
};

int main () {
    B b1;
    B b2 (b1); //Stack Overflow

    return 0;
}