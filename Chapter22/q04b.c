/* count the number of words in text file */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch1, ch2 = 'a', counter = 0;

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        return -1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "\nCannot find file %s.\n", argv[1]);
        return -1;
    }

    while ((ch1 = getc(fp)) != EOF) {
        if (!isspace(ch1) && (isspace(ch2) || counter == 0)) {
            ++counter;
            ch2 = 'a';
        }
        if (isspace(ch1)) {
            ch2 = ch1;
        }
    }    

    fprintf(stdout, "\nThere are %d words in file %s.\n", counter, argv[1]);
    fclose(fp);

    return 0;
}
