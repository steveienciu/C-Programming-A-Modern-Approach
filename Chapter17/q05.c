/* program that sorts series of words entered by user */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 20 /* max word length */
#define MAX_WORDS 30 /* max number of words */

int read_line(char str[], int n);
int compare_parts(const void *p, const void *q);

int main(void)
{
    char words[MAX_LEN];
    char *all_words[MAX_WORDS];
    int counter = 0, flag;

    printf("\n");
    for (;;) {
        if (counter == MAX_WORDS) {
            printf("No more space");
            break;
        }

        printf("Enter a word: ");

        flag = read_line(words, MAX_LEN);
        if (flag == 0) {
            break;
        }
        
        all_words[counter] = malloc(strlen(words) + 1);
        if (all_words[counter] == NULL) {
            printf("No more space");
            break;
        }
        strcpy(all_words[counter], words);

        ++counter;
    }

    qsort(&all_words, counter, sizeof(char*), compare_parts);

    printf("In sorted order:");
    for (int i = 0; i < counter; ++i) {
        printf(" %s", all_words[i]);
    }
    printf("\n");

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}

int compare_parts(const void *p, const void *q)
{
    const char *p1 = *(const char **)p;
    const char *q1 = *(const char **)q;

    return strcmp(p1, q1);
}
