#include <iostream>
class B {
    public:
        explicit B (int x) { 
            std::cout << "Hello From Constructor!\n"; 
        }
};

int main () {
    B obj1 = 3; //Սա արդեն չի թողնի
    B obj2 (5); //Սա կթողնի
    
    return 0;
}
