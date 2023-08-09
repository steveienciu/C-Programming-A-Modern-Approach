/* reverse series of numbers using macro to specify size of array */

#include <stdio.h>

#define SIZE ((int) sizeof(a) / sizeof(a[0]))

int main(void)
{
    int a[10];

    printf("\nEnter %d number: ", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (int i = SIZE - 1; i >=0; --i) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
