#include <iostream>
#include <vector>

class C {
private:
    std::vector<size_t> members;

    size_t align (size_t total_size, size_t alignment) {
        size_t mod = total_size % alignment;
        /* Տիպը պիտի սկսվի այն հասցեից, որ բաժանվի իրա sizeof-ի վրա, դրան պատիկ թիվ լինի */
        if (mod == 0) 
            return total_size;
        return total_size + (alignment - mod); /* Ավելացնում ենք padding */
    }

public:
    C (const std::vector <size_t>& m) : members (m) {}
    ~C () {}

    void foo () {
        size_t total_size = 0;

        std::cout << "\nResult:\n\n";

        for (size_t i = 0; i < members.size (); ++ i) {
            size_t size = members[i];
            size_t aligned = align (total_size, size);
            size_t padding = aligned - total_size;

            std::cout << "Field " << i << ": size = " << size << ", address = " << aligned << ", padding before = " << padding << "\n";

            total_size = aligned + size;
        }

        std::cout << "\nTotal class size = " << total_size << " bytes\n";
    }
};

struct Test {
    char a; //1 byte
    int b; //4 bytes
    char c; //1 byte
    long long d; //8 bytes
    char e; //1 byte
    short f; // 2 bytes
};


int main () {
    int n;
    do {
        std::cout << "Enter number of members: ";
        std::cin >> n;
    } while (n < 1);

    std::vector <size_t> arr (n);

    std::cout << "Enter sizes: ";
    for (size_t i = 0; i < n; ++ i) 
        std::cin >> arr[i];

    C object (arr);
    object.foo ();
    
    std::cout << "\nStruct Test: \n\n";
    std::cout << "Size Of Struct = " << sizeof (Test) << " bytes\n";

    return 0;
}

/* Struct-ի դեպքում մենք կունենանք tail padding, որովհետև CPU-ն 8-8 բայթ ա կարդում, դրա համար էլ 28-ից
alignment ա անելու 32 բայթ (8-ին պատիկ)։ */


/* Output
Enter number of members: 6
Enter sizes: 1 4 1 8 1 2

Result:

Field 0: size = 1, address = 0, padding before = 0
Field 1: size = 4, address = 4, padding before = 3
Field 2: size = 1, address = 8, padding before = 0
Field 3: size = 8, address = 16, padding before = 7
Field 4: size = 1, address = 24, padding before = 0
Field 5: size = 2, address = 26, padding before = 1

Total class size = 28 bytes

Struct Test: 

Size Of Struct = 32 bytes
*/