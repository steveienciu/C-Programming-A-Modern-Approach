/* print a sentence in reverse */

#include <stdio.h>

#define N ((int) sizeof(sentence) / sizeof(sentence[0]))

int main(void) 
{
    char sentence[100], ch, termination;
    short j;

    for (int i = 0; i < N; ++i) {
        sentence[i] = '|';
    }

    printf("\nEnter a sentence: ");
    for (int i = 0; i < N; ++i) {
        ch = getchar();
        if (ch == '.' || ch == '?' || ch == '!') {
            termination = ch;
            break;
        }
        else {
            sentence[i] = ch;
        }
    }

    printf("Reversal of sentence: ");
    for (int i = N - 1; i >= 0; --i) {
        if (sentence[i] == ' ') {
            j = i;
            while (sentence[j + 1] != ' ' && sentence[j + 1] != '|') {
                    printf("%c", sentence[j + 1]);
                    ++j;
            }
            printf("%c", ' ');
        }
        else if (i == 0) {
            j = i;
            while (sentence[j] != ' ') {
                printf("%c", sentence[j]);
                ++j;
            }
        }
    }
    printf("%c\n", termination);

    return 0;
}
