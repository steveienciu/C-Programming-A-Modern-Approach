/* program that reads message then prints it backwards */

#include <stdio.h>

#define MSG_LEN 50

int main(void)
{
    char ch[MSG_LEN], *p;

    printf("\nEnter a message: ");
    for (p = ch; p < ch + MSG_LEN; ++p) {
        *p = getchar();
        if (*p == '\n') {
            break;
        }
    }
    // p has address of the last character element stored inside of it and ch has address of its first element

    printf("%d\t%d", p, ch);

    printf("\nReversal is: ");
    for (--p; p >= ch; --p) { // decrement the first p at the start to get rid of the '\n' element 
        putchar(*p);
    }
    printf("\n");

    return 0;
}
