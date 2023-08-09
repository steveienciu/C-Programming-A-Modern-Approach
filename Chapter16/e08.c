/* build structure called color and declare const variable called magenta */

#include <stdio.h>

struct color {
    int red, green, blue;
} const MAGENTA = { .red = 255, .blue = 255 };

int main(void)
{
    printf("\nred = %d, green = %d, blue = %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);

    return 0;
}
