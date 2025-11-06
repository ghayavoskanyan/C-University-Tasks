#include <iostream>
#include <cassert>

class MiniString {
    static const int SSO_SIZE = 23;

    union {
        char sso[SSO_SIZE]; //For Short String
        char * heap; //For Long String
    };

    size_t size;
    size_t capacity;
    bool isHeap;

public:
    MiniString (const char * str) {
        size = 0;

        while (str[size] != '\0') 
            size ++;

        if (size < SSO_SIZE) {
            for (size_t i = 0; i < size; i ++)
                sso[i] = str[i];

            sso[size] = '\0';
            capacity = SSO_SIZE;
            isHeap = false;
        } else {
            heap = new char[size + 1];

            for (size_t i = 0; i < size; i++)
                heap[i] = str[i];

            heap[size] = '\0';
            capacity = size;
            isHeap = true;
        }
    }

    ~MiniString () {
        if (isHeap) 
            delete [] heap;
    }

    char & operator [] (size_t i) {
        assert (i < size);
        return isHeap ? heap[i] : sso[i];
    }

    size_t length () {
        return size;
    }

    void print () {
        if (isHeap) 
            for (size_t i = 0; i < size; i ++) 
                std::cout << heap[i];
        else 
            for (size_t i = 0; i < size; i ++) 
                std::cout << sso[i];

        std::cout << "\n";
    }
};
int main () {
    MiniString s1 ("Hello");
    MiniString s2 ("This is a quite long text!");

    s1.print (); //Կտպի Hello
    s2.print (); //Կտպի This is a quite long text!

    s1[1] = 'h';
    s1.print (); //Կտպի Hhllo 

    return 0;
}