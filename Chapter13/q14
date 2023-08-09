/* modify chapter 8 q16 to include the function that returns true if is anagrams */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHARACTERS 30

bool are_anagrams(const char *word1, const char *word2);

int main(void) 
{
    char word1[MAX_CHARACTERS], word2[MAX_CHARACTERS];
    bool result;

    printf("\nEnter first word: ");
    scanf("%s", word1);

    printf("Enter second word: "); 
    scanf("%s", word2);

    if (strlen(word1) > MAX_CHARACTERS || strlen(word2) > MAX_CHARACTERS) {
        printf("One of the words were too long\n");
        return 0;
    }

    result = are_anagrams(word1, word2);

    if (result) {
        printf("\nThe words are anagrams.\n");
    }
    else {
        printf("\nThe words are not anagrams.\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int value[26] = { 0 }, position, counter = 0;

    while (*word1) {
        if (*word1 >= 'A' && *word1 <= 'Z') {
            position = *word1 - 'A';
            ++value[position];
        }
        else if (*word1 >= 'a' && *word1 <= 'z') {
            position = *word1 - 'a';
            ++value[position];
        }

        ++word1;
    }

    while (*word2) {
        if (*word2 >= 'A' && *word2 <= 'Z') {
            position = *word2 - 'A';
            --value[position];
        }
        else if (*word2 >= 'a' && *word2 <= 'z') {
            position = *word2 - 'a';
            --value[position];
        }

        ++word2;
    }

    for (int i = 0; i < 26; ++i) {
        if (value[i] != 0) {
            ++counter;
            break;
        }
    }

    if (counter == 0) {
        return true;
    }
    else if (counter == 1) {
        return false;
    }
}
