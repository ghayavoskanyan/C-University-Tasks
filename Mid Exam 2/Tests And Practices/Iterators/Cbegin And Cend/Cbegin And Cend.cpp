#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> v = {1, 2, 3};

    auto it1 = v.begin ();
    *it1 = 100 //ok
    
    //but if we want to be sure that value will not be changed:
    auto it2 = v.cbegin ();
    // *it2 = 100; //not ok

    return 0;
}