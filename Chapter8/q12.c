/* cahpter 7 q05 to use an array
*/

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    short scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;
    char ch;

    printf("\nEnter a word: ");
    while ((ch = getchar()) && ch != '\n') {
        ch = toupper(ch);
        sum += scrabble[ch - 'A'];
    }
    printf("Scrabble value: %d", sum);

    return 0;
}
