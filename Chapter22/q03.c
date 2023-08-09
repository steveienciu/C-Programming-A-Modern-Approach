/* program that concatenates any number of files by writing them to standard output */

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc < 3) {
        fprintf(stderr, "\nInvalid number of command-line inputs.\n");
        return -1;
    }

    for (int i = 1; i < argc; ++i) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "\nCannot open file %s.\n", argv[i]);
            return -1;
        }
        fclose(fp);
    }

    printf("\n");
    for (int i = 1; i < argc; ++i) {
        fp = fopen(argv[i], "r");
        while ((ch = getc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    printf("\n");

    return 0;
}
