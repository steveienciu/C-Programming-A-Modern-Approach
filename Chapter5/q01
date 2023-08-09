/* program that calculates how many digits number contains (up to 4 digits) */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0 && num < 10) {
        printf("The number %d has 1 digit", num);
    }
    else if (num > 9 && num < 100) {
        printf("The number %d has 2 digits", num);
    }
    else if (num > 99 & num < 1000) {
        printf("The number %d has 3 digits", num);
    }
    else if (num > 999 && num < 10000) {
        printf("The number %d has 4 digits", num);
    }
    else {
        printf("Error: Please enter a number with at most 4 digits");
    }

    return 0;
}
