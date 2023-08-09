/* modify chapter 12 q02 to include a function that checks if message is a palindrome */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

void get_message(char *message, int n);
bool is_palindrome(const char *message);

int main(void)
{
    char msg[N];
    bool result;

    printf("\nEnter a message: ");
    get_message(msg, N);

    result = is_palindrome(msg);

    if (!result) {
        printf("Not a palindrome\n");
    }
    else {
        printf("Palindrome\n");
    }


    return 0;
}

void get_message(char *message, int n)
{
    int ch;

    while ((ch = getchar()) != '\n') {
        if (message < message + n && isalpha(ch)) {
            *message++ = tolower(ch);
        }
    }

    *message = 0;
}

bool is_palindrome(const char *message)
{
    const char *p = message, *q = message;

    while (*p) {
        ++p;
    }

    --p; // do this because pointing at null character after end of loop
    while (p != q) {
        if (*p != *q) {
            return false;
        }
        ++q;
        --p;
    }

    return true;
}
