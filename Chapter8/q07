/* reads 5x5 array of integers and then prints row sums and column sums */

#include <stdio.h>

#define N 5

int main(void)
{
    int numbers[N][N];
    int sum = 0;

    printf("\n");
    for (int i = 0; i < N; ++i) {
        printf("Enter student %d: ", i + 1);
        for (int j = 0; j < N; ++j) {
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\nRow totals:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum += numbers[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }

    printf("\nColumn totals:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum += numbers[j][i];
        }
        printf(" %d", sum);
        sum = 0;
    }
    printf("\n");

    return 0;
}
