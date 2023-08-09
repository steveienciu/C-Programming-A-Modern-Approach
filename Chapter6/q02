/* calculates GCD of two numbers */

#include <stdio.h>

int main(void)
{
    int m, n, dividend, divisor, remainder;

    printf("\nEnter two integers: ");
    scanf("%d%d", &m, &n);

    if (n > m) {
        // make sure that the dividend is larger than the divisor 
        dividend = n;
        divisor = m;
    }
    else {
        dividend = m;
        divisor = n;
    }

    if (dividend == 0 && divisor == 0) {
        printf("\nThe greatest common divisor is undefined\n");
    }
    else {
        while (divisor != 0 && dividend != 0) {
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }

        printf("\nGreatest common divisor: %d", dividend);
    }

    return 0;
}
