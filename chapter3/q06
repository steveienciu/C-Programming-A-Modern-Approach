/* allow user to add two rational fractions at the same time */

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, num, denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    num = denom2 * num1 + denom1 * num2;
    denom = denom1 * denom2;

    printf("The sum is %d/%d", num, denom);

    return 0;
}
