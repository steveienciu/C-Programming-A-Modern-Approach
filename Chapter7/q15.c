/* computes factorial of positive number */

#include <stdio.h>

int main(void)
{
    short number;
    long factorial = 1;

    printf("\nEnter a positive integer: ");
    scanf("%hd", &number);

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    printf("Factorial of %hd: %ld\n", number, factorial);

    return 0;
}
