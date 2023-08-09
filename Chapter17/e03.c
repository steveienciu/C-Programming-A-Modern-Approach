/* function that returns pointer to dynamically allocated int array with n numbers and each initialized to initial value */

#include <stdio.h>
#include <stdlib.h>

void *create_array(int n, int initial_value);

int main(void)
{
    int n, initial_value, *p;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the intialization value: ");
    scanf("%d", &initial_value);

    p = create_array(n, initial_value);

    for (int i = 0; i < n; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}

void *create_array(int n, int initial_value)
{
    int *p = malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i) {
        p[i] = initial_value;
    }

    return p;
}
