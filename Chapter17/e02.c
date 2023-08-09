/* funtion called duplicate that uses dynamic storage allocation to create copy of string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 20

void *duplicate(const char *str);

int main(void)
{
    char str[STR_LEN + 1];

    printf("\nPlease enter a word to be copied: ");
    scanf("%s", str);
    printf("Copied version is: %s\n", duplicate(str));
}

void *duplicate(const char *str)
{
    char *p = malloc(strlen(str) + 1);
    if (p == NULL) {
        return NULL;
    }
    strcpy(p, str);

    return p;
}
