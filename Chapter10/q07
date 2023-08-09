/* displays numbers in seven-segment display */

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

/* external variables */
const int segements[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1}, 
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
};
char digits[3][MAX_DIGITS * 4];

/* protoypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch;
    int digit, array[MAX_DIGITS];

    clear_digits_array();

    printf("\nEnter a number: ");
    for (int i = 0; i < MAX_DIGITS;) {
        ch = getchar();
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
            process_digit(digit, i);
            ++i;
        }
        else if (ch == '\n') {
            break;
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < MAX_DIGITS * 4; ++j) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    for (int i = 0; i < 7; ++i) {
        if (segements[digit][i] == 1) {
            switch (i) {
                case 0:
                    digits[0][1 + position * 4] = '_';
                    break;
                case 1:
                    digits[1][2 + position * 4] = '|';
                    break;
                case 2:
                    digits[2][2 + position * 4] = '|';
                    break;
                case 3:
                    digits[2][1 + position * 4] = '_';
                    break;
                case 4:
                    digits[2][position * 4] = '|';
                    break;
                case 5: 
                    digits[1][position * 4] = '|';
                    break;
                case 6:
                    digits[1][1 + position * 4] = '_';
                    break;
            }
        }
    }
}

void print_digits_array(void)
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4 * MAX_DIGITS; ++j) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
