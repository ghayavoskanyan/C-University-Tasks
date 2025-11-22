#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> myVector = {1, 9, 44, 422, 676, 78};
    for (vector<int>::iterator i = myVector.begin (); i != myVector.end (); ++ i) {
        *i += 2;
        cout << *i << " ";
    }
    cout << "\n";
    //Now we will have: 3 11 46 424 678 80

    //If we want to avoid from it, we should do this way:
    for (vector<int>::const_iterator i = myVector.cbegin (); i != myVector.cend (); ++ i) {
        // *i += 2; //now we cannot do this, it will give us error (read only)
        cout << *i << " ";
    }
    cout << "\n";

    /* Բայց ինչու է թողնում սենց բան անել՝ vector<int>::const_iterator i = myVector.begin (), 
    երբ begin-ը const չի? Այն աշխատում է, որովհետև 
    iterator -> const_iterator - կարելի ա
    const_iterator -> iterator - չի կարելի 
    ոնց որ օրինակ int -> double կարելի ա, բայց հակառակը չէ։ Այսինքն, const_iterator-ը ունի
    կոնստրուկտոր, որն ընդունում է սովորական iterator։ Բայց նաև գոյություն ունի cbegin ու cend, իրենք 
    const են վերադարձնում */

    return 0;
}