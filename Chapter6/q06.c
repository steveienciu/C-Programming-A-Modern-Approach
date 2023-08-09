/* prints all even square between 1 and n */

#include <stdio.h>

int main(void) 
{
    int perfect_square;

    printf("\nEnter a number to print even square within that number: ");
    scanf("%d", &perfect_square);

    for (int i = 1; i * i <= perfect_square; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
