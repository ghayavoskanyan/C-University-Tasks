#include <iostream>
class B {
    public:
        B (int x) { 
            std::cout << "Hello From Constructor!\n"; 
        }
};

void foo (B b) {}

int main () {
    /* Սա թաքնված ինիցիալիզացիա է։ Երբ կա =, կա նաև Constructor-ի կանչ */
    B obj = 3; 
    
    B obj2 (5); //Իսկ սա թաքնված չի
    
    foo (10); //Սա էլ է թաքնված ինիցիալիզացիա
    
    return 0;
}