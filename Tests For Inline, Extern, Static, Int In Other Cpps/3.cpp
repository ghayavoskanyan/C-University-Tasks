#include "1.cpp"
#include "2.cpp"
#include "header.h"

/* Inline-ի դեպքում, որ Compile անենք, կտա սենց error` multiple initialization,
որովհետև հայտարարել ենք նույն անունով փոփոխական մի քանի անգամ։ Կարող ենք պատկերացնել, 
որ գրել ենք 3․cpp-ում սա 
inline int a = 1;
inline int a = 2;

Նույն error-ը կլիներ նաև, եթե գրեինք
inline int a = 1;
int a = 2;
*/

//Դիտարկենք այլ դեպք, մեկը գրենք main-ում
#include <iostream>

inline int a = 100;

//ֆունկցիաների դեպքում extern կարանք չգրենք
extern void print_a ();

int main () {
    std::cout << a << "\n";

    print_a ();

    return 0;
}

/* Քանի որ ամեն անգամ տարբեր արժեքներ ենք ստանում, այսինքն compiler-ը մեզ գառանծիյա չի տալիս, թե որ մի a-ն ա տպելու։
Նման խնդրից խուսափելու համար ունենում ենք header ֆայլ, օրինակ՝ header.h, բայց հիմա էլ կտա multiple definition, 
որովհետև էլի պատկերացնենք իրար տակ գրածա։ Ու կապ չունի inline գրածա թե չէ, compiler-ի համար իրանք նույն բանն են, կարա 
այսինքն գրած լինի, ինքը չի նայում էդ keyword-ներին չի նայում։ Բայց linker-ի համար սրանք լրիվ տարբեր բաներ են */
/* 
inline int a = 2;
int a = 10;
static int a = 7;
*/


