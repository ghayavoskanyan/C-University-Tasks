#include <iostream>

class Int {
    public:
        /* I just wanted to show that in usual int, constructor is empty */
        Int () {
            std::cout << "Hello From Constructor!\n";
        }

        /*
        if we want to always initialize int, we should write constructor like this:
        int value;
        Int () : value (0) {}
        */
        
        ~Int () {
            std::cout << "Hello From Destructor!\n";
        }
};

int main () {
    Int obj; 
    /*
    Hello From Constructor!
    Hello From Destructor!
    */

    return 0;
}
