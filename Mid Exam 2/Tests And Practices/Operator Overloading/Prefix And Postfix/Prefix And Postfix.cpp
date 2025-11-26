#include <iostream>

class Number {
private:
    int value;

public:
    Number (int v) : value (v) {}

    //++a
    Number& operator++ () {
        std::cout << "Prefix ++ invoked!\n";
        value ++;
        return *this;
    }

    //a++
    Number operator++ (int) {
        std::cout << "Postfix ++ invoked!\n";
        Number temp = *this;
        value ++;
        return temp;
    }

    int get () const { 
        return value; 
    }
};


int main () {
    Number a (5);

    std::cout << "Initial a = " << a.get () << "\n";

    Number p = ++a;
    std::cout << "a = " << p.get () << ", new a = " << a.get () << "\n";

    Number q = a++; 
    std::cout << "a = " << q.get () << ", new a = " << a.get () << "\n";

    return 0;
}