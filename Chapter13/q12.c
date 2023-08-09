/* modify chapter 8 q14 so it stores words in two dimensional array */

#include <stdio.h>
#include <stdbool.h>

#define MAX_WORDS 30
#define MAX_CHAR 20

int main(void) 
{
    char sentence[MAX_WORDS][MAX_CHAR], *ch = sentence[0], termination, input;
    int words = 0, column = 0, characters = 0, row = 0;

    // assume the person typing is not retarded
    printf("\nEnter a sentence: ");
    while (true) {
        *ch = getchar();
        if (*ch == ' ') {
            *ch = 0;
            ++row;
            ch = sentence[row];
        }
        else if (*ch == '.' || *ch == '?' || *ch == '!') {
            termination = *ch;
            *ch = 0;
            break;
        }
        else {
            ++ch;
        }
    }

    printf("Reversal of sentence: ");
    while (true) {
        if (row == 0) {
            printf("%s", sentence[row]);
            break;
        }
        else {
            printf("%s ", sentence[row]);
        }
        --row;
    }
    printf("%-1c\n", termination);

    return 0;
}
