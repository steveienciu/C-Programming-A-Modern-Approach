/* modify chapter 8 q01 so user can enter more than one number to test for repeated digits */

#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
    int repeated_digits[N] = {0};
    int digit;
    long n;
    short test_number;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % N;
        ++repeated_digits[digit];
        n /= N;
    }

    printf("Enter to see how many times a digit was repeated: ");
    while (scanf("%hd", &test_number) && test_number > 0) {
        if (repeated_digits[test_number] == 0) {
            printf("Digit %hd appeared 0 times\n", test_number);
        }
        else {
            printf("Digit %hd appeared %d time(s)\n", test_number, repeated_digits[test_number]);
        }
        printf("Enter to see how many times a digit was repeated: ");
    }

    return 0;
}
