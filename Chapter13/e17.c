/* function creates a proper URL */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define EXT_LENGTH 3
#define FILE_LENGTH 30

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    char file_name[FILE_LENGTH + 5];
    char extension[EXT_LENGTH + 1];
    bool result;

    printf("\nEnter file name: ");
    scanf("%s", file_name);

    printf("Enter extension you are looking for: ");
    scanf("%s", extension);

    result = test_extension(file_name, extension);

    printf("\nResult: %d\n", result);

    return 0;
}

bool test_extension(const char *file_name, const char *extension)
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
        printf("\nNo extension in file name\n");
        exit(0);
    }

    if (strcmp(fn, extension) == 0) {
        return true;
    }
    else {
        return false;
    }
}
