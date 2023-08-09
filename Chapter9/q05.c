/* modify chapter 8 q17 to include functions */

#include <stdio.h>
#include <stdlib.h>

void create_magic_square(short n, int magic_sqaure[99][99]);
void print_magic_square(short n, int Magic_square[99][99]);

int main(void) 
{
    short N;
    int square[99][99] = {0};

    printf("\nThis program creates a magic square of specified.");
    printf("\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");
    scanf("%hd", &N);

    create_magic_square(N, square);
    print_magic_square(N, square);

    return 0;
}

void create_magic_square(short n, int magic_sqaure[99][99])
{
    short row = 0;
    short column = n / 2;

    if (n % 2 == 0) {
        printf("Size of array needs to be an odd number.\n");
        exit(0);
    }

    for (int i = 1; i <= n * n; ++i) {
        if (i == 1) {
            magic_sqaure[row][column] = 1;
        }
        else {
            if (row == 0) {
                row = n - 1;
            }
            else {
                row -= 1;
            }
            if (column == n - 1) {
                column = 0;
            }
            else {
                column += 1;
            }
            if (magic_sqaure[row][column] > 0 && magic_sqaure[row][column] <= n * n) {
                if (row == n - 1 && column == 0) {
                    magic_sqaure[1][n - 1] = i;
                    row = 1;
                    column = n - 1;
                }
                else {
                    magic_sqaure[row + 2][column - 1] = i;
                    row += 2;
                    column -= 1;
                }
            }
            else {
                magic_sqaure[row][column] = i;
            }
        }
    }
}

void print_magic_square(short n, int magic_square[99][99]) 
{
 for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
