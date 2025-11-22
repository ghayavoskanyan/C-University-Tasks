#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> myVector = {1, 9, 44, 422, 676, 78};

    for (vector<int>::reverse_iterator i = myVector.rbegin (); i != myVector.rend (); ++ i) {
        cout << *i << " ";
    }
    cout << "\n";
    //78 676 422 44 9 1

    return 0;
}