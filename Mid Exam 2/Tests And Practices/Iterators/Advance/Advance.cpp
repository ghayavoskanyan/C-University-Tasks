#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> myVector = {1, 9, 44, 422, 676, 78};

    vector<int>::iterator it = myVector.begin ();

    // cout << *(it + 3); //422

    // Instead of this, we can write like this:
    advance (it, 3);
    cout << *it << "\n"; //422
    

    return 0;
}