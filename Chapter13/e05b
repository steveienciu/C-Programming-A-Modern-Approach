/* function that captalizes all letters in its argument using pointer arthmetic */

#include <stdio.h>
#include <ctype.h>

#define STR_LENGTH 15

void capitalize(char *str, int n);

int main(void) 
{
    char str[STR_LENGTH + 1];

    printf("\nEnter word: ");
    capitalize(str, STR_LENGTH);

    puts(str);

    return 0;
}

void capitalize(char *str, int n)
{
    char *ch = str;

    while ((*ch = getchar()) != '\n') {
        if (ch < str + n) {
            *(ch++) = toupper(*ch);
        }
    }

    *ch = '\0';
}
