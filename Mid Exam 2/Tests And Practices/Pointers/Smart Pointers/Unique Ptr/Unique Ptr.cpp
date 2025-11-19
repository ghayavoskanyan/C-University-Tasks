#include <iostream>
#include <memory>
using namespace std;

int main () 
{
    unique_ptr<int> unPtr1 = make_unique<int> (25);
    cout << unPtr1 << "\n"; //0x14ad870a1d0
    cout << *unPtr1 << "\n"; //25

    unique_ptr<int> unPtr2 = move (unPtr1);
    cout << unPtr2 << "\n"; //0x14ad870a1d0
    cout << *unPtr2 << "\n"; //25
    cout << *unPtr1 << "\n"; //չի թողնի, ազատել ա unPtr1-ը

    return 0;
}