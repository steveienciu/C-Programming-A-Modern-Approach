/* program that asks user to enter amount of taxable income, then displays the tax due */

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 0) {
        printf("\nCannot have negative or zero income\n");
    }
    else if (income > 0) {
        tax = 0.01 * income;
    }
    else if (income > 750) {
        tax = tax + 7.5 + 0.02 * income;
    }
    else if (income > 2250) {
        tax = tax + 37.5 + 0.03 * income;
    }
    else if (income > 3750) {
        tax = tax + 82.5 + 0.04 * income;
    }
    else if (income > 5250) {
        tax = tax + 142.5 + 0.05 * income;
    }
    else {
        tax = tax + 230 + 0.06 * income;
    }

    printf("\nYour tax due for an income of %0.2f is %0.2f\n", income, tax);

    // need only if statements for this program since income tax stacks
}
