/* reduces fraction to lowest terms */

#include <stdio.h>

int main(void)
{
    int m, n, dividend, divisor, remainder;

    printf("\nEnter a fraction: ");
    scanf("%d/%d", &m, &n);

    if (n > m) {
        // make sure that the dividend is larger than the divisor 
        dividend = n;
        divisor = m;
    }
    else {
        dividend = m;
        divisor = n;
    }

    if (n == 0) {
        printf("\nThe fraction entered is undefined\n");
    }
    else if (m == 0) {
        printf("\nIn lowest terms: 0\n");
    }
    else {
        while (divisor != 0 && dividend != 0) {
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }

        m = m / dividend;
        n = n / dividend;
        printf("In lowest terms: %d/%d\n", m, n);
    }

    return 0;
}
