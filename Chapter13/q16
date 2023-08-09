/* modify chapter 12 q01 to reverse the message */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MSG_LEN 75

void reverse(char *message);

int main(void)
{
    char message[MSG_LEN];

    printf("\nEnter a messsage: ");
    gets(message);

    if (strlen(message) > 75) {
        printf("Message is too long\n");
        return 0;
    }

    reverse(message);

    return 0;
}

void reverse(char *message) 
{
    char *p = message;

    while(*p) {
        ++p;
    }

    printf("Reversal is: ");
    for (p; p >= message; --p) {
        printf("%c", *p);
    }
    printf("\n");
}
