// Cards scenario A-- original, errors included

// This implementation is missing curly braces around the if statements
// Additionally, even if the card doesn't meet the condition, we could have
// something other than an Ace (King, Queen, or Jack)

#include <stdio.h>

int main() {
    
    int card = 1;
    if (card > 1)
        card = card - 1;
        if (card < 7)
            puts("Small card");
    else {
        puts("Ace!");
    }

    return 0;

}