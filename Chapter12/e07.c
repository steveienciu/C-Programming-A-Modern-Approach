/* write function that returns true if 'key' matches with element in array */

#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int *a, int n, int key);

int main(void)
{
    int a[N], key = 69;
    bool answer;

    printf("\nEnter 10 integers: ");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }

    answer = search(&a[0], N, key);

    printf("%d\n", answer);

    return 0;
}

bool search(const int *a, int n, int key)
{
    int counter = 0;
    const int *p;

    for (int i = 0; i < N; ++i) {
        if (a[i] == key) {
            return true;
        }
        if (i == N - 1) {
            return false;
        }
    }
}
