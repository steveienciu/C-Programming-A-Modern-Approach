/* modify chaptre 7 q10 to include a function to count number of vowels */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENTENCE_LEN 10

int compute_vowel_count(const char *sentence);

int main(void)
{ 
    short number_of_vowels = 0;
    char sentence[SENTENCE_LEN];

    printf("\nEnter a sentence: ");
    gets(sentence);

    if (strlen(sentence) > SENTENCE_LEN) {
        printf("Sentence is too long\n");
        return 0;
    }

    number_of_vowels = compute_vowel_count(sentence);

    printf("Your sentence contains %hd vowels\n", number_of_vowels);

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int number_of_vowels = 0;

    while (*sentence) {
        switch (*sentence) {
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
                ++number_of_vowels;
                break;
            default:
                break;
        }

        ++sentence;
    }

    return number_of_vowels;
}
