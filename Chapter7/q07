/* allow user to add, subtract, multiply, or divide two rational fractions at the same time */

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, num, denom;
    char arthmetic;

    printf("\nEnter two fractions separated by an arithmetic sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &arthmetic, &num2, &denom2);

    if (denom1 == 0 || denom2 == 0) {
        printf("Cannot have 0 in the denominator\n");
        return 0;
    }

    if (arthmetic == '+') {
        num = denom2 * num1 + denom1 * num2;
        denom = denom1 * denom2;
        if (num == 0) {
            printf("The sum is 0\n");
        }
        else {
            printf("The sum is %d/%d\n", num, denom);
        }
    }
    else if (arthmetic == '-') {
        num = denom2 * num1 - denom1 * num2;
        denom = denom1 * denom2;
        if (num == 0) {
            printf("The sum is 0\n");
        }
        else {
            printf("The difference is %d/%d\n", num, denom);
        }
    }
    else if (arthmetic == '*') {
        num = num1 * num2;
        denom = denom1 * denom2;
        if (num == 0) {
            printf("The sum is 0\n");
        }
        else {
            printf("The product is %d/%d\n", num, denom);
        }
    }
    else if (arthmetic == '/') {
        if (num2 == 0) {
            printf("The value is undefined\n");
        }
        else {
            num = denom2 * num1;
            denom = denom1 * num2;
            if (num == 0) {
                printf("The sum is 0\n");
            }
            else {
                printf("The sum is %d/%d\n", num, denom);
            }
        }
    }

    return 0;
}
