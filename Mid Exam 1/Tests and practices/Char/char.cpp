#include <iostream>

int main () {
    char name [7] = "Hello\0";
    
    * (name + 3 * sizeof (char)) = 't';
    std::cout << name << "\n"; //կտպի Helto
    
    name [3] = 'l';
    std::cout << name << "\n"; //կտպի Hello
    
    const char* const str1 = "hello"; //Read Only
    str1 = "world"; //Չի թողնի
    str1[0] = 'H'; //Չի թողնի
    
    const char* str2 = "hello";
    str2[0] = 'H'; //Չի թողնի
    
    char str3[] = "hello";
    char* const ptr3 = str3; 
    ptr3 = "world"; //Չի թողնի
    ptr3[0] = 'H'; //Օքեյ ա
    
    char str4[] = "hello"; //Սա string literal է, ինքը գրվում է read only-ում
    char* ptr4 = str4; 
    ptr4 = "world"; //Օքեյ չի, որովհետև հասցե փոխել ա
    ptr4[0] = 'H'; //Օքեյ ա
    
    return 0;
}