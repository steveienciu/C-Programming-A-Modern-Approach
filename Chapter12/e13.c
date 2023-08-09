/* create identiy function */

#include <stdio.h>

#define N 10

int main(void)
{
    int ident[N][N], *p, counter = 0;

    for (p = &ident[0][0]; p < &ident[0][0] + N * N; ++p) {
        if (counter == N || p == &ident[0][0]) {
            *p = 1;
            counter = 0;
        }
        else {
            *p = 0;
            ++counter;
        }
    }

    printf("\n");
    for (p = &ident[0][0]; p < &ident[0][0] + N * N; ++p) {
        ++counter;
        if (counter % N == 0) {
            printf("%d\n", *p);
        }
        else {
            printf("%d ", *p);
        }
    }
}
