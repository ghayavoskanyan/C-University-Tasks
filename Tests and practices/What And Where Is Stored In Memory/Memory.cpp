#include <iostream>

int sum (int val1, int val2) {
    return val1 + val2;
}

// sum () -> Code segment
// val1 -> Stack
// val2 -> Stack

int main () {
    int a = 101; //Stack
    int b; //Stack

    std::cout << sum (5, 10) << "\n"; //Code segment

    int *p = new int (5); //p -> Stack, 5 -> Heap


    std::cout << "Hello world" << std::endl; /* Hello world -> Read-only data */

    static int k = 10; //Data segment
    static int v; //BSS segment

    return 0;
}

// main () -> Code segment 