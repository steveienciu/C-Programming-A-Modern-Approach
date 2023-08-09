/* modify chapter 5 q05 to use functions */

#include <stdio.h>

float income_tax(float income, int tax);

int main(void)
{
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    tax = income_tax(income, tax);

    printf("\nYour tax due for an income of %0.2f is %0.2f\n", income, tax);

    return 0;
}

float income_tax(float income, int tax)
{
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

    return tax;
}
