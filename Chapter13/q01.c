/* find smallest and largest in series of words (by alphabet) */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WORD_LENGTH 20

void smallest(const char *word, char *smallest_word);
void largest(const char *word, char *largest_word);

int main(void)
{
    char word[WORD_LENGTH], smallest_word[WORD_LENGTH] = { 0 }, largest_word[WORD_LENGTH];
 
    printf("\n");
    while (true) {
        printf("Enter a word: ");
        scanf("%20s", word);

        if (strlen(word) == 4) {
            break;
        }

        if (strlen(smallest_word) == 0) {
            strcpy(smallest_word, word);
            strcpy(largest_word, word);
        }
        else {
            smallest(word, smallest_word);
            largest(word, largest_word);
        }
    }

    printf("\nSmallest word: %s", smallest_word);
    printf("\nLargest word: %s\n", largest_word);

    return 0;
}

void smallest(const char *word, char *smallest_word)
{
    if (strcmp(word, smallest_word) < 0) {
        strcpy(smallest_word, word);
    }
}

void largest(const char *word, char *largest_word)
{
    if (strcmp(word, largest_word) > 0) {
        strcpy(largest_word, word);
    }
}
