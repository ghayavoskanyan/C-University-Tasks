#include <iostream>

int main () {
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday"; break;
        case 2:
            std::cout << "Tuesday"; break;
        case 3:
            std::cout << "Wednesday"; break;
        default:
            std::cout << "Another day!";
    } 
    return 0;
}