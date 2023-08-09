/* function called my_malloc that allocates the required memory and prints error if NULL pointer returned */

#include <stdio.h>
#include <stdlib.h>
#include "new_malloc.h"

void *new_malloc(size_t number_of_bytes)
{
    void *p = malloc(number_of_bytes); /* no idea data type being used, therefore use void since is just a memory address */

    if (p == NULL) {
        printf("Error: malloc failed in my_malloc\n");
        exit(0);
    }
    else {
        return p;
    }
}
