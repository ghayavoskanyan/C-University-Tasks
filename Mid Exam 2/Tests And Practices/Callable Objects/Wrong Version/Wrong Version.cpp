#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    std::vector<int> v = {3, 1, 2};

    std::sort (v.begin (), v.end (), (int l, int r) { return l < r; });

    for (int x : v)
        std::cout << x << " "; //1 2 3
}