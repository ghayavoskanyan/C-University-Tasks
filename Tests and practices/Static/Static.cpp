#include <iostream>

void foo2 () {
    std::cout << "hii" << "\n";
}

void foo () {
    static int x = 0;
    x++;
    std::cout << x << "\n";
    
    foo2 ();
}

static int g = 10;

int main () {
    foo ();
    foo ();
    foo ();
    std::cout << g << "\n";
    g += 10;
    foo2 ();
    std::cout << g << "\n";
    foo ();
}