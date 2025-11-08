#include <iostream>
#include <vector>
#include <string>

class B {
    private:
        int i; //4 bytes
        std::vector <int> v; //24 bytes
        std::string s; //32 bytes

    public:
        B () {}
        /* Մինչև constructor-ի {} մտնելը, class-ին հիշողություն արդեն հատկացվելա՝ 64 բայթ */
        ~B () {}
};

int main () {
    std::cout << "Size of class B = " << sizeof (B) << " bytes" << std::endl; //64 bytes
    /* Հասկանանք, թե ինչու է 64 բայթ։ Մեր compiler-ը անում է alignment-ներ, որովհետև CPU-ն ութ-ութ 
    բայթ է կարդում։ Հետևաբար, int-ը 4 բայթ, հաջորդ 4 բայթը դատարկ, հաջորդ 24 բայթը vector-ը, հասանք
    33-րդ բայթ, (33-1) % 8 == 0 դրա համար դատարկ տեղ չի թողնում ու գրում է string-ը հաջորդ 32 բայթում։
    Overall Memory = 4 + 4 + 24 + 32 = 64 bytes
    */

    return 0;
}