// Cards scenario A-- fixed 

// This implementation correctly adds curly brackets where needed 
// It also corrects the output that doesn't meet the first two conditions

// After compiling, this program prints the correct output

#include <stdio.h>

int main() {

    int card = 1;

    if (card > 1) {
        card -- ; 
        if (card < 7) {
            puts("Small card");
        }
    }

    else {
        puts("Ace, King, Queen, or Jack!");
    }

    return 0;

}