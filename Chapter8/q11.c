/* modify chapter 7 q04 so number is stored in array */

#include <stdio.h>
#include <ctype.h>

#define SIZE 15

int main(void) 
{
    char phone_number[SIZE];

    printf("\nEnter the phone number: ");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%c", &phone_number[i]);
        if (phone_number[i] == '\n') {
            break;
        }
    }

    printf("In numeric form: ");
    for (int i = 0; i < SIZE; ++i) {
        phone_number[i] = toupper(phone_number[i]);
        switch (phone_number[i]) {
            case 'A': case 'B': case 'C':
                phone_number[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                phone_number[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                phone_number[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                phone_number[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                phone_number[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                phone_number[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                phone_number[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phone_number[i] = '9';
                break;
            default:
                break;
        }
        if (phone_number[i] == '\n') {
            printf("\n");
            
            return 0;
        }
        printf("%c", phone_number[i]);
    }
}
