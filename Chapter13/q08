/* modify chapter 7 q05 so includes function to return value of scrabble word */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define WRD_LEN 15

int compute_scrabble_value(char *word);

int main(void)
{
    char word[WRD_LEN];
    int sum;

    printf("\nEnter a word: ");
    scanf("%14s", word); // allow for only 14 character to be accepted since last needs to be null character

    sum = compute_scrabble_value(word);

    printf("Scrabble value: %d\n", sum);

    return 0;
}

int compute_scrabble_value(char *word)
{
    int sum = 0;

    while (*word) {
        if (!isalpha(*word)) {
            printf("Only letters are accepted\n");
            exit(0);
        }

        *word = toupper(*word);

        switch(*word) {
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

        ++word;
    }

    return sum;
}
