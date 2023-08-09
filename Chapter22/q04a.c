/* counts the number of characters in text file */

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, counter = 0;

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        return -1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "\nCannot find file %s.\n", argv[1]);
        return -1;
    }

    while ((ch = getc(fp)) != EOF) {
        ++counter;
    }

    fprintf(stdout, "\nThere are %d characters in file %s.\n", counter, argv[1]);

    fclose(fp);
    return 0;
}
