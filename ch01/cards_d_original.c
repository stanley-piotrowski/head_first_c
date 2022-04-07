// Cards scenario D

// This implementation will fail during compilation due to a missing curly brace
// for the main() function

#include <stdio.h>

int main() {

    int card = 1;
    if (card > 1) {
        card = card - 1;
        if (card < 7)
            puts("Small card");
    else 
        puts("Ace!");

    return 0;

}