#include <iostream>

int main () {
    const char* const str1 = "hello"; //Read Only
    str1 = "world"; //Չի թողնի
    str1[0] = 'H'; //Չի թողնի
    
    const char* str2 = "hello";
    str2 = "world"; //Օքեյ ա
    str2[0] = 'H'; //Չի թողնի
    
    char str3[] = "hello";
    char* const ptr3 = str3; 
    ptr3 = "world"; //Չի թողնի
    ptr3[0] = 'H'; //Օքեյ ա

    const char name[7] = "Hello\0";
    name[3] = 't';
    std::cout << name; //Error կտա, չի թողնի փոխել

    return 0;
}