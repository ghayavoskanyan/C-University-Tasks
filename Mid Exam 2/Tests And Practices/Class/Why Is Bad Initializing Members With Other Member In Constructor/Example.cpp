#include <iostream>
#include <vector>
#include <string>

class B {
    private:
        int i;
        std::vector <int> v;
        std::string s;

    public:
        /* Սխալ է ()-ում մեկը մյուսով ինիցիալիզացնել, որովհետև մեր փոփոխականները ստեղծվում են այն հերթականությամբ, 
        ինչ որ private-ում, այսինքն սկզբից պիտի ստեղծվի i-ն, իսկ կոնստրուկտորում գրված է i (v.front ()), իսկ v-ն դեռ 
        գոյություն չունի, հետևաբար ինքը լցնելու ա էն ինչ կա v-ին հատկացված հիշողությունում, այսինքն՝ garbage: Սրա 
        արդյունքում կստանանք Undefined Behavior (UB), որը շատ վատ է։
        */
        B () : i (v.front ()), v {1, 2}, s ("Hello World!") {
            std::cout << "i = " << i << "\n" << "v.size () = " << v.size () << "\n" << "s = " << s << "\n";
        }
        /* : i (v.front ()), v {1, 2}, s ("Hello World!") սա կոչվում է initialator list */

        /* Նաև, i (v.size ())-ը միշտ կտա Undefined Behavior (UB), իսկ i (v.front ())-ը Undefined Behavior (UB),  
        երբեմն էլ ցույց կտա հիշողություն, որը մերը չի, այսինքն փորձեցինք դիմել այլ ծրագրի հիշողություն => 
        Segmentation Fault
        */

       /* Undefined Behavior (UB)-ը ամենավատ բաներից ա, ինքը կարա ծածկվի ու աշխատի, հետո ժամերով Debug Build անենք,
       որ սխալը գտնենք։
       */
};

int main () {
    B object;
    
    return 0;
}