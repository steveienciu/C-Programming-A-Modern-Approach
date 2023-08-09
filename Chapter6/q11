/* approx. the value of e (e = 1 + 1/1! + 1/2! + 1/3! + ...) */

#include <stdio.h>

int main(void) 
{
    int n, factorial = 1;
    float sum;

    printf("\nEnter value of 'n' to approximate the value of 'e': ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            sum = 1.00;
        }
        else {
            factorial *= i;
            sum += 1.00/factorial;
        }
    }

    printf("'e' is approximated to be: %0.10f\n", sum);

    return 0;
}
