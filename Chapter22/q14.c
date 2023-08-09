/* caesar cipher with grabbing inputs from file and outputting the contents to another file */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) 
{
    FILE *fp1, *fp2;
    char input_file[FILENAME_MAX], output_file[FILENAME_MAX];
    int shift, ch;

    fprintf(stdout, "\nEnter name of file to be encrypted: ");
    fscanf(stdin, "%s", input_file);

    if ((fp1 = fopen(input_file, "r")) == NULL) {
        fprintf(stderr, "\nInvalid file name.\n");
        return -1;
    }

    fprintf(stdout, "Enter a shift amount (1-25): ");
    fscanf(stdin, "%d", &shift);

    strcpy(output_file, input_file);
    strcat(output_file, ".enc");
    fp2 = fopen(output_file, "w");

    while ((ch = getc(fp1)) != EOF) {
        if (isalpha(isupper(ch))) {
            ch = (ch - 'A' + shift) % 26 + 'A';
            fputc(ch , fp2);
        }
        else if (isalpha(ch)) {
            ch = (ch - 'a' + shift) % 26 + 'a';
            fputc(ch , fp2);
        }
        else {
            fputc(ch , fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
