/* function that takes two array, multiples said element then adds it to the next said elements */

#include <stdio.h>

#define N 3

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[N], b[N], total;

    printf("\nEnter elements into first array: ");
    for (int i = 0; i < N; ++i) {
        scanf("%lf", &a[i]);
    }

    printf("Enter elements into second array: ");
    for (int i = 0; i < N; ++i) {
        scanf("%lf", &b[i]);
    }

    total = inner_product(&a[0], &b[0], N);

    printf("\nThe inner product is: %0.2lf\n", total);

    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    const double *p = &a[0], *q = &b[0];
    double total = 0.0;
    int counter = 0;
    
    while (counter < N) {
        total += *(p + counter) * *(q + counter);
        ++counter;
        printf("%d  %d\n", p + counter, q + counter);
    }

    return total;
}
