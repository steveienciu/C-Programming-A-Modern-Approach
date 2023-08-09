/* splits the amount of dollar to $20, $10, $5, and $1 dollor bills to most efficient */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("\nEnter the number of dollars you have: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("Can be split into: %d twentie(s), %d ten(s), %d five(s), and %d one(s)\n", twenties, tens, fives, ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int remainder;

    *twenties = dollars / 20;
    remainder = dollars % 20;
    *tens = remainder / 10;
    remainder %= 10;
    *fives = remainder / 5;
    remainder %= 5;
    *ones = remainder;
}
