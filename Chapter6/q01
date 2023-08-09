/* finds largest in series of numbers */

#include <stdio.h>

int main(void) 
{
    float num, max = 0;

    printf("\nEnter a number. When done, enter 0 or a negative number: ");
    scanf("%f", &num);

    while (num > 0) {
        if(num > max) {
            max = num;
        }
        printf("Enter a number: ");
        scanf("%f", &num);
    }

    printf("\nThe largest number entered was %0.2f\n", max);

    return 0;
}
