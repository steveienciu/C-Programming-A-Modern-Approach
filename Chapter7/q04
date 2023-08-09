/* program that translates alphabetic phone number intp numeric form */

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char ch, test;

    printf("\nEnter phone number: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch (ch) {
            case 'A': case 'B': case 'C':
                ch = '2';
                //printf("%c", test);
                break;
            case 'D': case 'E': case 'F':
                ch = '3';
                break;
            case 'G': case 'H': case 'I':
                ch = '4';
                break;
            case 'J': case 'K': case 'L':
                ch = '5';
                break;
            case 'M': case 'N': case 'O':
                ch = '6';
                break;
            case 'P': case 'R': case 'S':
                ch = '7';
                break;
            case 'T': case 'U': case 'V':
                ch = '8';
                break;
            case 'W': case 'X': case 'Y':
                ch = '9';
                break;
            default:
                break;
        }
        printf("%c", ch);
    } 

    return 0;
}
