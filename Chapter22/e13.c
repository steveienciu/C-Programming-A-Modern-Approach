/* write function that return the length of given line in text file */

#include <stdio.h>
#include <stdlib.h>

int line_length(const char *filename, int n);

int main(int argc, char *argv[])
{
    FILE *fp;
    int n, length;

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        exit(0);
    }

    printf("\nEnter line number: ");
    scanf("%d", &n);

    length = line_length(argv[1], n);

    printf("\nThe length of the line is %d.\n", length);

    return 0;
}

int line_length(const char *filename, int n)
{
    FILE *fp;
    int counter = 1, ch, length = 0;

    if ((fp = fopen(filename, "r")) != NULL) {
        while ((ch = getc(fp)) != EOF) {
            if (counter == n && ch == '\n') {
                break;
            }
            if (counter != n && ch == '\n') {
                ++counter;
            }
            if (counter == n && ch != '\n') {
                ++length;
            }
        }
    }
    else {
        fprintf(stderr, "\n%s does not exist.\n", filename);
        exit(0);
    }

    fclose(fp);

    return length;
}
