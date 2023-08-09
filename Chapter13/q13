/* modify chapter 8 q15 to include function for the encryption */

#include <stdio.h>
#include <string.h>

void encrypt(char *message, int shift);

#define SENTENCE_LEN 80

int main(void) 
{
    char message[SENTENCE_LEN];
    short shift;

    printf("\nEnter a message to be encrypted: ");
    gets(message);

    if (strlen(message) > SENTENCE_LEN) {
        printf("Sentence is too long\n");
        return 1;
    }

    printf("Enter a shift amount (1-25): ");
    scanf("%hd", &shift);

    encrypt(message, shift);

    printf("\nEncrypted message: ");
    puts(message);

    return 0;
}

void encrypt(char *message, int shift)
{
    while (*message) {
        if (*message >= 'A' && *message <= 'Z') {
            *message = (*message - 'A' + shift) % 26 + 'A'; 
        }   
        else if (*message >= 'a' && *message <= 'z') {
            *message = (*message - 'a' + shift) % 26 + 'a';
        }
        
        ++message;
    }
}
