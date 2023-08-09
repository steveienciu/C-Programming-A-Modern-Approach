/* program that computes value of word by summing values of its letters (scrabble) */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int sum = 0;

    printf("\nEnter a word: ");

    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch(ch) {
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'Y': case 'W':
                sum += 4;
                break;
            case 'K':
                sum += 4;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default:
                ++sum;
                break;
        }
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}
