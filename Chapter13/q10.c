/* modfiy chapter 7 q11 to include function that reverses the name */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NAME_LEN 30

void reverse_name(char *name);

int main(void)
{
    char name[NAME_LEN];

    printf("\nEnter a first and last name: ");
    gets(name);

    if (strlen(name) > NAME_LEN) {
        printf("The name entered is too long\n");
        return 0;
    }

    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    short counter = 0;
    char first_initial;

    while (*name) {
        if (counter > 0 && *name == toupper(*name) && *name != ' ') {
            printf("%c", *name);
            ++counter;
        }
        else if (*name == toupper(*name) && counter == 0 && *name != ' ') {
            first_initial = *name;
            ++counter;
        }
        else if (counter > 1 && *name != ' ') {
            printf("%c", *name);
        }

        ++name;
    }

    printf(", %c.\n", first_initial);
}
