#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> myVector = {1, 9, 44, 422, 676, 78};

    cout << "Our Vector: ";
    for (vector<int>::iterator i = myVector.begin (); i != myVector.end (); ++ i) {
        cout << *i << " ";
    }
    cout << "\n";

    vector<int>::iterator it = myVector.begin ();
    advance (it, 3);
    myVector.insert (it, 999); //մենք ասում ենք 3-րդ ինդեքսում ավելացրու 999-ը

    cout << "New Vector: ";
    for (vector<int>::iterator i = myVector.begin (); i != myVector.end (); ++ i) {
        cout << *i << " ";
    }
    cout << "\n";

    return 0;
}
