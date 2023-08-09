/* program that transforms user integer input to octal */

#include <stdio.h>

int main(void)
{
    int num, d1, d2, d3, d4, d5, r1, r2, r3, r4, r5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    d1 = num / 8; // numerator for next variable
    r1 = num % 8; // remaninder 

    d2 = d1 / 8;
    r2 = d1 % 8;

    d3 = d2 / 8;
    r3 = d2 % 8;

    d4 = d3 / 8;
    r4 = d3 % 8;

    d5 = d4 / 8;
    r5 = d4 % 8;

    printf("In octal, your number is: %d%d%d%d%d", r5, r4, r3, r2, r1);

    return 0;
}
