/* remove file name from URL, only have the https and the domain name of URL */

#include <stdio.h>
#include <string.h>

#define URL_LENGTH 50

void remove_filename(char *url);

int main(void)
{
    char url[URL_LENGTH];

    printf("\nPlease enter a URL: ");
    scanf("%50s", url);

    remove_filename(url);

    printf("URL without the file name is: ");
    puts(url);

    return 0;
}

void remove_filename(char *url)
{
    int counter = 0;

    while (*url) {
        if (*url == '/') {
            ++counter;
        }

        if (counter == 3) {
            *url = '\0';
            break;
        }

        ++url;
    }
}
