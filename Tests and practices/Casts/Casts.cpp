#include <iostream>

class Base {
    public:
        virtual void show () { 
            std::cout << "Base\n"; 
        }
};

class Inherit : public Base {
    public:
        void show () override { 
            std::cout << "Inherit\n"; 
        }
};

int main () {
    //C-style Cast
    double d = 9.8;
    int i = (int)d;
    std::cout << "(int)d = " << i << "\n"; //9

    //Static Cast
    double x = 5.6;
    int y = static_cast <int> (x);
    std::cout << "static_cast = " << y << "\n";

    //Dynamic Cast
    Base* b = new Inherit;
    Inherit* k = dynamic_cast <Inherit*> (b);
    if (k) k -> show ();
    delete b;

    //Reinterpret Cast
    int num = 65;
    char* ch = reinterpret_cast <char*> (&num);
    std::cout << "reinterpret_cast = " << *ch << "\n";

    return 0;
}