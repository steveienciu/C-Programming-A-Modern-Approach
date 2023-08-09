/* modify chapter 8 q09 to include functions
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define N 10
#define SPOTS 4

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) 
{
    char walk[N][N];

    generate_random_walk(walk);
    print_array(walk);

   return 0;
}

void generate_random_walk(char walk[N][N])
{
    short decision, row = 0, column = 0, sum;
    char ch = 'A';

    srand((unsigned) time(NULL));

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            walk[i][j] = '.';
        }
    }

    for (int i = 0; i <= 25;) {
        if (i == 0) {
            walk[row][column] = ch;
            ++i;
        }
        else if ((row == 0 || isalpha(walk[row - 1][column])) && (column == 9 || isalpha(walk[row][column + 1])) && (row == 9 || isalpha(walk[row + 1][column])) 
        && (column == 0 || isalpha(walk[row][column - 1]))) {
            break;
        }
        else {
            while (true) {
                decision = rand() % 4;
                switch (decision) {
                    case 0:
                        if (row != 0 && !isalpha(walk[row - 1][column])) {
                            walk[row - 1][column] = ++ch;
                            --row;
                            ++i;
                            sum = 1;
                        }
                        break;
                    case 1:
                        if (column != 9 && !isalpha(walk[row][column + 1])) {
                            walk[row][column + 1] = ++ch;
                            ++column;
                            ++i;
                            sum = 1;
                        }
                        break;
                    case 2:
                        if (row != 9 && !isalpha(walk[row + 1][column])) {
                            walk[row + 1][column] = ++ch;
                            ++row;
                            ++i;
                            sum = 1;
                        }
                        break;
                    case 3: 
                        if (column != 0 && !isalpha(walk[row][column - 1])) {
                            walk[row][column - 1] = ++ch;
                            --column;
                            ++i;
                            sum = 1;
                        }
                        break;
                    default:
                        break;
                }
                if (sum) {
                    break;
                }
            }                
        }
    }
}

void print_array(char walk[N][N])
{
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}
