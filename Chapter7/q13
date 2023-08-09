/* calculate average word length of sentence */

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char ch;
    int number_of_character = 0, sum = 0, counter = 0;
    float average;

    printf("\nEnter a sentence: ");

    while (ch = getchar()) {
        ch = toupper(ch);
        if ((ch >= 'A' && ch <= 'Z') || ch == '.' || ch == '!' || ch == '?') {
            ++number_of_character;
        }
        else if (ch == ' ' || ch == '\n') {
            ++counter;
            sum += number_of_character;
            number_of_character = 0;
            if (ch == '\n') {
                average = (float) sum / counter;
                printf("Average word length: %0.1f\n", average);

                return 0;
            }
        }
    }
}
