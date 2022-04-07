/* 
 * Evaluate card face values.
 * Prompt the user to enter a card name, then print the value. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Define array to hold characters-- note, we need 2 because C uses "\0" as
    // a stopping point
    char card_name[2];
    puts("Enter card name (K, Q, J, or A): ");
    scanf("%2s", card_name);

    int val = 0;
    if (card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name); /* convert text to a number */
    }

    // Tell the user if the count has gone up or down
    if ((val >= 3) && (val <= 6)) {
        puts("Count has gone up.");
    } else if (val == 10) {
        puts("Count has gone down.");
    }

    return 0;

}