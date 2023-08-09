/* modify chapter 7 q13 to include function that find average length of a word */
/* limitations: an extra spaces will hinder the result */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SENTENCE_LEN 75

double compute_average_word_length(const char *sentence);

int main(void) 
{
    char sentence[SENTENCE_LEN];
    double average;

    printf("\nEnter a sentence: ");
    gets(sentence);

    if (strlen(sentence) > 75) {
        printf("Sentence is too long\n");
        return 0;
    }

    average = compute_average_word_length(sentence);

    printf("Average word length: %0.1f\n", average);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int number_of_characters = 0, sum = 0, word_counter = 0;
    double average;

    while (true) {
        if (isalpha(*sentence) || *sentence == '.' || *sentence == '!' || *sentence == '?') {
            ++number_of_characters;
        }
        else if ((*sentence == ' ' && isalpha(*(sentence + 1))) || *sentence == 0) {
            ++word_counter;
            sum += number_of_characters;
            number_of_characters = 0;
        }
        
        if (*sentence == 0) {
            break;
        }

        ++sentence;
    }

    return average = (double) sum / word_counter;
}
