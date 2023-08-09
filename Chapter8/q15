/* caesar cipher */

#include <stdio.h>

#define N ((int) sizeof(message) / sizeof(message[0]))

int main(void) 
{
    char message[80] = {'0'}, ch, result;
    short shift;

    for (int i = 0; i < N; ++i) {
        message[i] = '|';
    }

    printf("\nEnter a message to be encrypted: ");
    for (int i = 0; i < N; ++i) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }
        message[i] = ch;
    }

    printf("Enter a shift amount (1-25): ");
    scanf("%hd", &shift);

    printf("Encrypted message: ");
    for (int i = 0; i < N; ++i) {
        if (message[i] == '|') {
            break;
        }
        if (message[i] >= 'A' && message[i] <= 'Z') {
            result = (message[i] - 'A' + shift) % 26 + 'A'; 
            printf("%c", result);
        }   
        else if (message[i] >= 'a' && message[i] <= 'z') {
            result = (message[i] - 'a' + shift) % 26 + 'a';
            printf("%c", result);
        }
        else {
            printf("%c", message[i]);
        }
    }
    printf("\n");

    return 0;
}
