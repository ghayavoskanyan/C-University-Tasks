#include <iostream>

void foo () {
    int bigArray [100000000];
}

void recurse () {
    recurse ();
}

int main () {
    foo ();
    recurse ();
    
    return 0;
}