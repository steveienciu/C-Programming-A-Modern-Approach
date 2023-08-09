/* initialize rectangle to have upper left corner (10, 25) and lower left right (20, 15) */

#include <stdio.h>
#include <stdlib.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int main(void)
{
    struct rectangle *p; /* pointer to the structure rectangle */

    p = malloc(sizeof(struct rectangle)); /* allocate 16 bytes of memory to store the numbers */
    if (p == NULL) {
        printf("Error: malloc failed in main\n");
        return 0;
    }

    printf("\nLower right coordinates: (%d, %d) and upper left coordinates: (%d, %d)\n",  p->lower_right.x = 20, p->lower_right.y = 15, p->upper_left.x = 10, p->upper_left.y = 25);

    return 0;
}
