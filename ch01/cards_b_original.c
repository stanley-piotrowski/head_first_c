// Cards scenario B-- this implementation is missing a set of brackets
// This implementation won't print anything because the second if-else statement
// is interpreted as belonging with the first if-statement due to the missing brackets

#include <stdio.h>

int main() {

    int card = 1;

    if (card > 1) {
        card = card - 1;
        if (card < 7) 
            puts("Small card");
    else
        puts("Ace!");
    
    }

    return 0;

}