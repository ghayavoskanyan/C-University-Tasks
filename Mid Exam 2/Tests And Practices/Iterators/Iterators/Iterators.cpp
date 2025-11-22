#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> myVector = {1, 9, 44, 422, 676, 78};
    vector<int>::iterator it;

    it = myVector.begin ();

    it +=2;
    cout << *it << "\n"; //44

    it = myVector.end (); //it is showing on nullptr

    it --; 
    cout << *it << "\n"; //78


    //Now let's try with loop:
    for (vector<int>::iterator i = myVector.begin (); i != myVector.end (); ++ i) {
        cout << *i << " ";
    } //it will print our whole myVector
    cout << "\n";

    return 0;

}