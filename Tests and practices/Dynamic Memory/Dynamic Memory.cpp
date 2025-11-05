#include <iostream>
#include <cstdlib>

int main () {
    int *a = (int*) malloc (sizeof (int)); //Garbage
    int *b = new int; //Garbage
    int *c = new int (); //0
    int *d = new int (10); //10
    
    std::cout << *a << "\n"  << *b << "\n"  << *c << "\n"  << *d << std::endl;
    
    free (a);
    delete b;
    delete c;
    delete d;
    
    return 0;
}