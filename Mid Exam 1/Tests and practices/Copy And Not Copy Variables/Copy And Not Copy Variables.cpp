#include <iostream>
#include <string>

void print (const string &s) {
    std::cout << s << "\n";
}

void foo (int x) {
    x ++;
    std::cout << "In Function: " << x << "\n";
}

int main () {
    string s = "Hii";
    print (s); //Copy չի
    print ("Hello World!"); //Copy ա


    int a = 5;
    foo (a); //6

    std::cout << "In Main: " << a << std::endl; //5

    return 0;
}