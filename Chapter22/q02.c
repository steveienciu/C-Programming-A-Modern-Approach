/* converts all letter to upper case in a file leaving everything else untouched */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2) {
        fprintf(stderr, "\nImproper number of command-line arguments.\n");
        return -1;
    }

    if ((fp = fopen(argv[1], "r")) != NULL) {
        printf("\n");
        while ((ch = getc(fp)) != EOF) {
            fprintf(stdout, "%c", toupper(ch));
        }
        printf("\n");
    }
    else {
        fprintf(stderr, "\nCannot open file %s.\n", argv[1]);
    }

    fclose(fp);

    return 0;
}
