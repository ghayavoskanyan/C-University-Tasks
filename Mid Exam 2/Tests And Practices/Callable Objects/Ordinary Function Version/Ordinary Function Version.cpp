#include <iostream>
#include <algorithm>
#include <vector>

bool cmp (int a, int b) {
    return a < b;
}

int main () {
    std::vector<int> v = {3, 1, 2};

    std::sort (v.begin (), v.end (), cmp);

    for (int x : v)
        std::cout << x << " "; //1 2 3
}