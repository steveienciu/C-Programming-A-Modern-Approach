/* copies a file */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;

    if (argc != 3) {
        fprintf(stderr, "\nusage: fcopy source dest\n");
        exit(0);
    }

    if ((source_fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "\ncant open %s\n", argv[2]);
        exit(0);
    }

    if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "\ncan't open %s\n", argv[2]);
        fclose(source_fp);
        exit(0);
    }

    while ((ch = getc(source_fp)) != EOF) {
        if (putc(ch, dest_fp) == EOF) {
            fprintf(stderr, "\nError while copying. Terminating program.\n");
            fclose(source_fp);
            fclose(dest_fp);
            exit(0);
        }
    }

    fclose(source_fp);
    fclose(dest_fp);

    return 0;
}
