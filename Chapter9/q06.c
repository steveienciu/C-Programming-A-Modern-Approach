/* function that computes polynomial */

#include <stdio.h>
#include <stdlib.h>

long polynomial(int x);

int main(void) 
{
    int x;
    long total;

    printf("\nThe following polynomial will be solved:\n");
    printf("y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for x: ");
    scanf("%d", &x);

    total = polynomial(x);
    
    printf("with x = %d, the function has a value of %ld\n", x, total);

    return 0;
}

long polynomial(int x)
{
    int coefficients[] = {3, 2, -5, -1, 7, -6}, polynomial_size = 6, product = 1;
    double total = 0;

    for (int i = 0; i < polynomial_size; ++i) {
        for (int j = 0; j < polynomial_size - i - 1; ++j) {
            product *= x;
        }
        total += coefficients[i] * product;
        product = 1;
    }

    return total;
}
