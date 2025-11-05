#include <iostream>

int main () {
    const int a = 5;
    a = 10; // error: assignment of read-only variable `a`
    
    char str[] = "hello"; //Քոփին ա, այն գրվում է Read Only-ում
    char* ptr = str; 
    ptr = "world"; //Օքեյ չի
    ptr[0] = 'H'; //Օքեյ ա
    
    return 0;
}