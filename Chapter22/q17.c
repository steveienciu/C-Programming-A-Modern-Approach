/* properly format series of phone numbers from a file and display them */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, counter = 1, area_code, telephone_prefix, line_number;
    char number[20], h[1];

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        exit(0);
    }   

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "\nInvalid file name.\n");
        exit(0);
    }

    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            ++counter;
        }
    }
    rewind(fp);

    //printf("\n%d\n", counter);

    printf("\n");
    while (counter != 0) {
        fgets(number, sizeof(number), fp);
        if (sscanf(number, "%*[^0-9]%3d%*[^0-9]%3d%*[^0-9]%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%*[^0-9]%3d%*[^0-9]%3d%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%*[^0-9]%3d%3d%*[^0-9]%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%3d%*[^0-9]%3d%*[^0-9]%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%*[^0-9]%3d%3d%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%3d%*[^0-9]%3d%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%3d%3d%*[^0-9]%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        else if (sscanf(number, "%3d%3d%4d", &area_code, &telephone_prefix, &line_number) == 3) {
            fprintf(stdout, "(%d) %d-%d\n", area_code, telephone_prefix, line_number);
        }
        --counter;
    }
    fclose(fp);

    return 0;
}
