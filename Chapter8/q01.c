/* shows which digits were repeated (if any) */

#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) 
{
    bool digit_seen[N] = {false};
    bool repeated_digits[N] = {false};
    int digit;
    long n;
    short counter = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % N;
        if (digit_seen[digit]) {
            ++counter;
            repeated_digits[digit] = true;
        }
        digit_seen[digit] = true;

        n /= N;
    }

    if (counter > 0) {
        printf("Repeated digit(s): ");
        for (int i = 0; i < N; ++i) {
            if (repeated_digits[i] == true) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("No repeated digits");
    }
    printf("\n");

    return 0;
}
