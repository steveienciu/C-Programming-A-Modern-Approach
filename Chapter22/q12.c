/* extract info from file and output the contents in proper format */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int counter = 1, ch;
    char file_line[30], item[30], price[30], date[30];

    if (argc != 2) {
        fprintf(stderr, "\nInvalid number of command-line arguments.\n");
        return -1;
    }   

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "\nInvalid file name.\n");
        return -1;
    }

    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            ++counter;
        }
    }
    rewind(fp);
    
    printf("\nItem     Unit Price       Purchase Date\n");
    while (counter != 0) {
        fgets(file_line, sizeof(file_line), fp);
        if ((sscanf(file_line, "%[^,]%*c%[^,]%*c%[^\n]", item, price, date)) == 3) {
            printf("%s\t $%7s %18s\n", item, price, date);
        }
        --counter;
    }
    fclose(fp);

    return 0;
}
