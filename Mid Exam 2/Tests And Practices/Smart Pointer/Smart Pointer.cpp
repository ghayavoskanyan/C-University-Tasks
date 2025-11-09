/* Here I am using RAII idiom, it gives us guarantee, that memory taken from heap, would be deleted.
It thinks like that: If I took resource from heap, so I  have initiaized it, so I am supposed to 
release that memory at the end. Every class uses that idiom.
*/
/* If I will do it manually, for example in main, I am supposed to write delete in the end of the programm, 
but I can forget (for example I am making a project, and after 2 weeks I am opening that and forgetting about writing 
that), or maybe during programm something is going wrong and programm crashes, so we got memory leak. So, RAII is 
better way. We can use Smart Pointers for that.
*/
#include <iostream>

class SmartPtr {
private:
    int* ptr;

public:
    SmartPtr () {
        ptr = new int[100];
        std::cout << "Memory allocated for 100 elements\n";
    }

    ~SmartPtr () {
        delete [] ptr;
        std::cout << "Memory Released\n";
    }

    SmartPtr& operator = (const SmartPtr& other) {
        return *this;
    }

    int& operator [] (int index) {
        return ptr[index];
    }
};

int main () {
    SmartPtr arr;
    arr[0] = 42;
    std::cout << "First element = " << arr[0] << "\n";
    
    return 0;
}
