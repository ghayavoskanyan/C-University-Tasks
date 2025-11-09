#include <iostream>
class B {
    public:
        explicit B (int x, int y) {
            std::cout << "Hello From Constructor!\n";
        }
};

int main () {
    // B obj1 = {3, 4}; //explicit-ը չի թողում սենց բան անենք
    
    B obj2 (3, 4); //Օկ ա
    
    return 0;
}