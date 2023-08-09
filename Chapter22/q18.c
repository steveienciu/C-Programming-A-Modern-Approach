/* reads integers from file which then displays the largest, smallest, and median */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10000

int cmpfunc(const void * a, const void * b);

int main(int argc, char *argv[])
{
    FILE *fp;
    int a[MAX], counter = 0;

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        exit(0);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "\nUnable to open %s\n", argv[1]);
        exit(0);
    }

    while (fscanf(fp, "%d", &a[counter]) == 1) {
        ++counter;
    }

    qsort(a, counter, sizeof(int), cmpfunc);

    printf("\n");
    for (int i = 0; i < counter; ++i) {
        printf("%d ", a[i]);
    }

    fprintf(stdout, "\nThe largest number is %d.", a[counter - 1]);
    fprintf(stdout, "\nThe smallest number is %d.", a[0]);

    if (counter % 2 != 0) {
        fprintf(stdout, "\nThe median is %d", a[counter / 2]);
    }
    else {
        fprintf(stdout, "\nThe median is %d.", (a[(counter - 1) / 2] + a[(counter + 1) / 2]) / 2);
    }
    printf("\n");

    fclose(fp);

    return 0;
}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
