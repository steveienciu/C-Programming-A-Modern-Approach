/* change message to the unique way of typing it */

#include <stdio.h>
#include <ctype.h>

#define SIZE ((int) sizeof(message) / sizeof(message[0]))

int main(void) 
{
    char message[100] = {'|'};

    printf("\nEnter message: ");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%c", &message[i]);
        if (message[i] == '\n') {
            break;
        }
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < SIZE; ++i) {
        if (message[i] == '\n') {
            printf("!!!!!!!\n");
            return 0;
        }
        message[i] = toupper(message[i]);
        switch (message[i]) {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                break;
        }
        printf("%c", message[i]);
    }

}
