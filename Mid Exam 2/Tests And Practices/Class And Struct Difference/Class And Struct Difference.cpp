#include <iostream>
#include <string>

//Էստեղ ավտոմատ public է
struct struct_Person {
    std::string name;
    std::string surname;
    size_t age;
};

//Էստեղ ավտոմատ private է
class class_Person {
    std::string name;
    std::string surname;
    size_t age;
};

int main () {
    struct_Person a;
    a.name = "Ghaya";
    a.surname = "V";
    a.age = 20;
    std::cout << "Name: " << a.name << ", Surname: " << a.surname << ", Age: " << a.age << std::endl;
    
    class_Person b;
    b.name = "Elen"; //Արդեն սխալ է
    std::cout << b.name << "\n";
}