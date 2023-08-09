/* use do while to print any positivte number in reverse */

#include <stdio.h>

int main(void)
{
    int number, remainder;

    printf("\nEnter a positive integer: ");
    scanf("%d", &number);

    printf("The reversal is: ");
    do {
        remainder = number % 10;
        printf("%d", remainder);
        number = number / 10;
    } while (number != 0);
    printf("\n");

    return 0;
}
