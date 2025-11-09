#include <iostream>

class B {
    int x;
    
    public:
        B (int val) : x (val) {}
        
        operator int () {
            return x;
        }
};

int main () {
    B obj = 5; //Hidden Call Of Constructor
    // int i = obj; //Սա կթողնի
    int i = static_cast <int> (obj); //Սա էլ կթողնի
    std::cout << i << "\n"; //5
    
    return 0;
}