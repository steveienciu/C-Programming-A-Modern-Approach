/* checks to see if message is palindrome */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

int main(void)
{
    char msg[N], msg_correct[N], *p, *q;
    int flag = 0, letter_count = 0, counter = 0;

    q = &msg_correct[0];

    printf("\nEnter a message: ");
    for (p = msg; p < msg + N; ++p) {
        *p = getchar();
        *p = tolower(*p);
        if (*p == '\n') {
            break;
        }
    }

    for (p; p >= msg; --p) {
        if (isalpha(*p)) {
            *(q++) = *p;
            ++letter_count;
        }
    }

    while (letter_count >= 0) {
        if (*(q - (counter + 1)) != *(q - letter_count)) { // need to add 1 because the last element of q is empty (like that because of line 29)
            flag = 1;
            break;
        }
        ++counter;
        --letter_count;
    }

    if (flag == 1) {
        printf("Not a palindrome\n");
    }
    else {
        printf("Palindrome\n");
    }

    return 0;
}
