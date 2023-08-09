/* modify chapter 9 q07 to use recursion */

#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);

int main(void) 
{
    int x, n;

    printf("\nPrint two numbers: ");
    scanf("%d%d", &x, &n);

    printf("%d\n", power(x, n));
}

int power(int x, int n)
{
    int number;

    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        if (number == 1) {
            n = 0;
        }
        else {
            return x * x * power(x, number / 2);
        }
    }
    else {
        return x * power(x, n - 1);
    }
}
