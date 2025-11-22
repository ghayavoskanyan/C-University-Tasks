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
    advance (it, 1);
    myVector.erase (it); //9 would be removed
    myVector.erase (it, it + 2); //որ ինդեքսի վրա որ կանք, դրանից սկսած 2 տարր ջնջի

    cout << "New Vector: ";
    for (vector<int>::iterator i = myVector.begin (); i != myVector.end (); ++ i) {
        cout << *i << " ";
    }
    cout << "\n";

    return 0;
}
