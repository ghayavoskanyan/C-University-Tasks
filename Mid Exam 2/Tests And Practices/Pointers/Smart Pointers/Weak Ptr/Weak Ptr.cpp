#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass () {
        cout << "Constructor invoked \n";
    }
    ~MyClass () {
        cout << "Destructor invoked \n";
    }

};

int main () 
{

    weak_ptr<int> wePtr1; //empty
    {
        shared_ptr<int> shPtr1 = make_shared<int> (25);
        wePtr1 = shPtr1; //weak ptr is looking at shared ptr
    } //shPtr1 is being deleted here
    //object is deleted, so weak ptr is now expired
    

    return 0;
}