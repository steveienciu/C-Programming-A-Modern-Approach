/* prints nxn magic square (sums of rows, columns, and diagonals are same) */

#include <stdio.h>

int main(void) 
{
    short N;
    int square[99][99] = {0}, row, column;

    printf("\nThis program creates a magic square of specified.");
    printf("\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");
    scanf("%hd", &N);

    row = 0;
    column = N / 2;

    if (N % 2 == 0) {
        printf("Size of array needs to be an odd number.\n");
        return 0;
    }

    for (int i = 1; i <= N * N; ++i) {
        if (i == 1) {
            square[row][column] = 1;
        }
        else {
            if (row == 0) {
                row = N - 1;
            }
            else {
                row -= 1;
            }
            if (column == N - 1) {
                column = 0;
            }
            else {
                column += 1;
            }
            if (square[row][column] > 0 && square[row][column] <= N * N) {
                if (row == N - 1 && column == 0) {
                    square[1][N - 1] = i;
                    row = 1;
                    column = N - 1;
                }
                else {
                    square[row + 2][column - 1] = i;
                    row += 2;
                    column -= 1;
                }
            }
            else {
                square[row][column] = i;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%4d ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
