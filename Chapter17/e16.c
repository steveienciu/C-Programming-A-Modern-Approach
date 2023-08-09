/* write function called sum(g, i, j) that returns g(i) + .. + g(j) */

#include <stdio.h>

int sum(int (*f)(int), int start, int end);
int f1(int value);

int main(void)
{
    int start, end, total;

    printf("\nPlease enter a starting and ending point: ");
    scanf("%d%d", &start, &end);

    if (end < start) {
        printf("Invalid starting and ending points\n");
        return 0;
    }
    else if (start == end) {
        printf("The sum is %d\n", start);
        return 0;
    }
    else {
        total = sum(f1, start, end);
        printf("The sum is %d\n", total);
    }

    return 0;
}

int sum(int (*f)(int), int start, int end)
{
    int total = 0;

    while (start != (end + 1)) {
        total += (*f)(start++);
    }

    return total;
}

int f1(int value)
{
    return value;
}
