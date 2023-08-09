/* modify chapter 3 q03 to use pointers */

#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int m, n, dividend, divisor, remainder;

    printf("\nEnter a fraction: ");
    scanf("%d/%d", &m, &n);

    reduce(m, n, &dividend, &divisor);

    printf("In lowest terms: %d/%d\n", dividend, divisor);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int dividend, divisor, remainder;
    if (denominator > numerator) {
        // make sure that the dividend is larger than the divisor 
        dividend = denominator;
        divisor = numerator;
    }
    else {
        dividend = numerator;
        divisor = denominator;
    }

    if (denominator == 0) {
        printf("\nThe fraction entered is undefined\n");
        exit(0);
    }
    else if (numerator == 0) {
        printf("\nIn lowest terms: 0\n");
        exit(0);
    }
    else {
        while (divisor != 0 && dividend != 0) {
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }

        *reduced_numerator = numerator / dividend;
        *reduced_denominator = denominator / dividend;
    }
}
