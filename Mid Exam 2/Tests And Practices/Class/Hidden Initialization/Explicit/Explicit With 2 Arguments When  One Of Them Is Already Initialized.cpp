#include <iostream>

class B {
    public:
        explicit B (int x, int y = 4) {
            std::cout << "Hello From Constructor! " << x << " " << y << "\n";
        }
};

int main () {
    // B obj1 = {3, 4}; //Օկ չի
    // B obj1 = 3; //Օկ չի
    
    B obj2 (3); //Օկ ա //3 4
    B obj3 (3, 4); //3 4
    B obj4 (3, 7); //3 7, եթե կոնստրուկտորում const լիներ, էլի տպելու էր 3 7 
    
    return 0;
}