#include <iostream>
#include <string>
using namespace std;

class string {
    public: 
        string () {
            cout << "This is string!" << "\n";
        }
};

int main () {
    string s;

    return 0;
} 

//Սա շատ վատ ա, compiler-ը չի հասկանում std գրադարանինը օգտագործի, թե մեր սարքածը