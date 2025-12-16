#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    std::vector<int> v = {3, 1, 2};

    std::sort(v.begin(), v.end(), std::less<int>());

    std::cout << "Less: ";
    for (int x : v)
        std::cout << x << " "; //1 2 3

    std::cout << "\n";
    
    std::sort(v.begin(), v.end(), std::greater<int>());

    std::cout << "Greater: ";
    for (int x : v)
        std::cout << x << " "; //3 2 1
}