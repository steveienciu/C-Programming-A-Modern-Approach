/* sort integers in array using recursive function */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void selection_sort(int array[], int n);

int main(void) 
{
    int array[N] = {0}, n;

    printf("\nEnter a series of positive integer: ");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &array[i]);
    }

    selection_sort(array, N);

    return 0;
}

void selection_sort(int array[], int n)
{
    int temp, spot = 0, max;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            max = array[0];
        }
        else if (array[i] > max) {
            max = array[i];
            spot = i;
        }
        if (i == n - 1) {
                temp = array[n - 1];
                array[n - 1] = max;
                array[spot] = temp;
        }
    }

    if (n == 1) {
        printf("From smallest to largest: ");
        for (int i = 0; i < N; ++i) {
            printf("%d ", array[i]);
        }
        printf("\n");
        return;
    }
    else {
        selection_sort(array, n - 1);
    }
}
