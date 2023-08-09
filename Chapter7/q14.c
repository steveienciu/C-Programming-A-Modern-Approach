/* Newton's method to compute square root of floating point number */

#include <stdio.h>
#include <math.h>

#define THRESHOLD 0.00001

int main(void) 
{
    double x, y = 1.00, x_y, average_x_y, old_y = 2;

    printf("\nEnter a positive number: ");
    scanf("%lf", &x);

    while (fabs(old_y - y) > THRESHOLD) {
        old_y = y;
        x_y = x / y;
        average_x_y = (y + x_y) / 2;
        y = average_x_y;
    }

    printf("Square root: %lf\n", y);

    return 0;
}
