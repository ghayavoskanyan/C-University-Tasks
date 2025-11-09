#include <iostream>
class B {
    public:
        explicit B () {
            std::cout << "Hello From Constructor!\n";
        }
};

int main () {
    // B obj1; //Ok
    // B obj2 (); //Not Ok
    // B obj3 (10); //Not Ok
    
    return 0;
}