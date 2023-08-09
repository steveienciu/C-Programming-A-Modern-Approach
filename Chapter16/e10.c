/* build structures to store information about objects on a graphics screen */

#include <stdio.h>
#include <stdlib.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};

/* part a: write function that computes area of r */

int object_area (struct rectangle r)
{
    int x_value, y_value, area;

    x_value = r.upper_left.x - r.lower_right.x;
    y_value = r.upper_left.y - r.lower_right.y;

    return area = abs(x_value * y_value);
}

/* part b: write function that finds center of quadrilateral (truncate coordinates to integer) */

struct point center (struct rectangle r)
{
    struct point center_rectangle;

    center_rectangle.x = abs((r.upper_left.x - r.lower_right.x) / 2);
    center_rectangle.y = abs((r.upper_left.y - r.lower_right.y) / 2);

    return center_rectangle;
}

int main(void)
{
    struct rectangle r;
    struct point middle;
    int area;

    r.upper_left.x = 2, r.upper_left.y = 6;
    r.lower_right.x = 7, r.lower_right.y = 3;

    area = object_area(r);
    middle = center(r);

    printf("\nArea of the graphic object is: %d\n", area);
    printf("The center of the rectnagle in (x, y) coordinate is (%d, %d)\n", middle.x, middle.y);

    return 0;
}
