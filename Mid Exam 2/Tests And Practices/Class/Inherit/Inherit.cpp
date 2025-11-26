#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;

protected:
    int prot = 2;

private:
    int priv = 3;
};

class DerivedPublic : public Base {
public:
    void test () {
        cout << "Public Inherit: \n";
        cout << pub << "\n"; //public
        cout << prot << "\n"; //protected
        // cout << priv << "\n"; //error կտա, ինքը private ա
    }
};

class DerivedProtected : protected Base {
public:
    void test () {
        cout << "Protected Inherit: \n";
        cout << pub << "\n";   //protected
        cout << prot << "\n";  //protected
        // cout << priv << "\n"; //private
    }
};

class DerivedPrivate : private Base {
public:
    void test () {
        cout << "Private Inherit: \n";
        cout << pub << "\n";   //private
        cout << prot << "\n";  //private
        // cout << priv << "\n"; //private
    }
};

int main () {
    DerivedPublic p;
    p.test ();
    cout << "pub = " << p.pub << "\n"; //օկ ա
    // cout << "prot = " << p.prot << "\n"; //օկ չի
    // cout << "priv = " << p.priv << "\n"; //օկ չի

    DerivedProtected pr;
    pr.test ();
    // cout << "pub = " << p.pub << "\n"; //օկ չի
    // cout << "prot = " << p.prot << "\n"; //օկ չի
    // cout << "priv = " << p.priv << "\n"; //օկ չի

    DerivedPrivate pv;
    pv.test ();
    // cout << "pub = " << p.pub << "\n"; //օկ չի
    // cout << "prot = " << p.prot << "\n"; //օկ չի
    // cout << "priv = " << p.priv << "\n"; //օկ չի
    
    return 0;
}