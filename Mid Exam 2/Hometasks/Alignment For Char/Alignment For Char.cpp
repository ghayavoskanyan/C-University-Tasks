#include <iostream>

struct Test {
    char a; //1 byte
    char b; //1 byte
    char c[8]; //8 bytes
};

int main () {
    std::cout << "Size Of Struct = " << sizeof (Test) << " bytes\n"; //Size Of Struct = 10 bytes

    return 0;
}

/* Ստացվում ա, որ ինքը char c[8]-ը հասկանում ա ոչ թե 8-բայթանի տարր, այլ 1-բայթանի 8 հատ տարրեր */