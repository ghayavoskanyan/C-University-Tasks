#include <iostream>

#pragma pack (3);

struct MyStruct {
    char c;  //1 byte
    int i;   //4 byte
};

struct MyStructDefault {
    char c; 
    int i;
};

int main() {
    std::cout << "Size with #pragma pack(3): " << sizeof (MyStruct) << " bytes\n";
    std::cout << "Size without pack (default): " << sizeof (MyStructDefault) << " bytes\n";

    return 0;
}