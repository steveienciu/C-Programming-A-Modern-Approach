/* function that modifes string by replacing every occurence of foo with xxx */

#include <stdio.h>
#include <string.h>

#define STR_LENGTH 20

void censor(char *str);

int main(void) 
{
    char str[STR_LENGTH + 1];

    printf("\nEnter sentence: ");
    gets(str); // dont use, create own function
    censor(str);
    printf("%s", str);

    return 0;
}

void censor(char *str)
{
    char *ch = str;

    for (; *ch != '\0'; ++ch) {
        if (*ch == 'f' && *(ch + 1) == 'o' && *(ch + 2) == 'o') {
            *ch = *(ch + 1) = *(ch + 2) = 'x';
        }
    }
}
