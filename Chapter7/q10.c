/* counts number of vowels (a, e, i, o, and u) in sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{ 
    short number_of_vowels = 0;
    char ch;

    printf("\nEnter a sentence: ");

    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                ++number_of_vowels;
                break;
            default:
                break;
        }
    }

    printf("Your sentence contains %hd vowels\n", number_of_vowels);

    return 0;
}
