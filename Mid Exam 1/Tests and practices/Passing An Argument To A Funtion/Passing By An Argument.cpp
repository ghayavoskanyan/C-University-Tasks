#include <iostream>

void byValue (int t) {
    t = 100; //Էստեղ մենք փոխում ենք միայն copy-ն 
} 

void byRef (int &t) {
    t = 150; //Էստեղ մենք փոխում ենք հենց իրեն
}

void byPtr (int *t) {
    *t = 200; //Էստեղ մենք փոխում ենք հենց իրեն
}

int main () {
    int x = 5;
    // double &y = x; //Էսպիսի բան չի կարելի
    
    byValue (x);
    std::cout << x << "\n"; //5
    
    byRef (x);
    std::cout << x << "\n"; //150
    
    byPtr (&x);
    std::cout << x << std::endl; //150
}