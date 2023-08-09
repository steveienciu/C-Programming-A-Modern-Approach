/* takes first and last name and displays: last name, first initial. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, first_initial;
    short counter = 0;

    printf("\nEnter a first and last name: ");
    while ((ch = getchar()) != '\n') {
        if (counter > 0 && ch == toupper(ch) && ch != ' ') {
            printf("%c", ch);
            ++counter;
        }
        else if (ch == toupper(ch) && counter == 0 && ch != ' ') {
            first_initial = ch;
            ++counter;
        }
        else if (counter > 1 && ch != ' ') {
            printf("%c", ch);
        }
    }

    printf(", %c.", first_initial);

    return 0;
}
