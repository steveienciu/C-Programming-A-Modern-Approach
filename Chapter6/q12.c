/* modify chapter 6 q11 so that continues adding terms until current term becomes less than user inputted number */

#include <stdio.h>

int main(void) 
{
    int factorial = 1, terms = 0;
    float sum = 1.00, n;

    printf("\nEnter value of 'n' to find how many terms it takes to reach that 'e'\n");
    printf("The value entered needs to be greater than 1: ");
    scanf("%f", &n);

    for (int i = 0;; ++i) {
        if (sum >= n) {
            printf("\nThe number of terms to get to specified value is: %d\n", terms);
            return 0;
        }
        if (i == 0) {
            sum = 1.00;
            ++terms;
        }
        else {
            factorial *= i;
            sum += 1.00/factorial; // need to have 1.00 to turn the result into a float 
            ++terms;
        } 
    }
}
