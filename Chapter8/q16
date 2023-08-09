/* tests whether two words are anagrams */

#include <stdio.h>
#include <ctype.h>

#define N ((int) sizeof(value) / sizeof(value[0]))

int main(void) 
{
    short value[26] = {0}, counter = 0;
    char ch;

    printf("\nEnter first word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            ch -= 'a';
            ++value[ch];
        }
    }  

    printf("Enter second word: "); 
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            ch -= 'a';
            --value[ch];
        }
    }

    for (int i = 0; i < N; ++i) {
        if (value[i] != 0) {
            ++counter;
            break;
        }
    }

    if (counter == 0) {
        printf("The words are anagrams.\n");
    }
    else if (counter == 1) {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
