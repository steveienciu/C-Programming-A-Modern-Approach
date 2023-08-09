/* parse out the extension on the file name and print it */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXT_LENGTH 3 // most file exensions are 3 characters
#define FILE_LENGTH 50

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char extension[EXT_LENGTH + 1]; 
    char file_name[FILE_LENGTH + 5]; // +5 to include the '.', extension, and null character

    printf("\nEnter a file name: ");
    scanf("%s", file_name); // assuming file name has no spcaes 

    get_extension(file_name, extension);

    printf("The extension of the file is: ");
    puts(extension);

    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    const char *fn = file_name;
    int length;

    while (*fn) {
        ++fn;
        if (*fn == '.') {
            ++fn;
            break;
        }
    }

    length = strlen(fn);

    if (length > 3) {
        printf("\nInvalid extension\n");
        exit(0);
    }
    else if (length == 0) {
        strcpy(extension, "null");
    }
    else {
        strcpy(extension, fn);
    }
}
