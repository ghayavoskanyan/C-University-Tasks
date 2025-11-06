#include <cstdlib>

int main () {
    int* a = (int*) malloc (10 * sizeof (int)); //new
    
    int* b = (int*) calloc (10, sizeof (int)); //Միանգամից ինիցիալիզացնում ա 0-ներով
    
    b = (int*) realloc (b, 20 * sizeof (int)); //Փոխում է չափը b-ից (իրա էս պահին եղած չափից) ու սարքում 20 * sizeof (int)
    
    free(a); //delete
    free(b);
}