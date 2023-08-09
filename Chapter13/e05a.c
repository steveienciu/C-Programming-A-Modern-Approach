/* function that captalizes all letters in its argument using array subscripting */

#include <stdio.h>
#include <ctype.h>

#define STR_LENGTH 15

void capitalize(char str[], int n);

int main(void) 
{
    char str[STR_LENGTH + 1];

    printf("\nEnter word: ");
    capitalize(str, STR_LENGTH);

    puts(str);

    return 0;
}

void capitalize(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = toupper(ch);
        }
    }

    str[i] = '\0';
}
