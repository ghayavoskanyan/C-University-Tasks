/* Ունենք զանգված, որի բոլոր թվերը կրկնվում են՝ հանդիպում 2 անգամ։ Երկու թիվ իրենց զույգը չունեն։ Գտնել այդ թիվը։ */
#include <iostream>
int main () {
    int arr [] = {6, 2, 4, 9, 6, 7, 7, 8, 9, 8};
    int n = sizeof (arr) / sizeof (arr[0]);

    int xorAll = 0;
    for (int i = 0; i < n; i++)
        xorAll ^= arr[i];

    /* գտնում ենք ամենաաջին բիթը */
    int rightBit = xorAll & (-xorAll);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightBit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    std::cout << "Numbers that don't repeat are: " << x << " and " << y << std::endl;
    return 0;
}