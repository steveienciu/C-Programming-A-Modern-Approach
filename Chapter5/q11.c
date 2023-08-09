/* program that takes 2-digit number that converts it to english words */

#include <stdio.h>

int main(void)
{
    int tens_digit, ones_digit, number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    ones_digit = number % 10;
    tens_digit = number / 10;

    printf("\nYou entered the number ");

    switch (tens_digit) {
        case 9:
            printf("ninty");
            break;
        case 8:
            printf("eighty");
            break;
        case 7:
            printf("seventy");
            break;
        case 6:
            printf("sixty");
            break;
        case 5:
            printf("fifty");
            break;
        case 4:
            printf("forty");
            break;
        case 3:
            printf("thirty");
            break;
        case 2:
            printf("twenty");
            break;
        default:
            break;
    }

    if (ones_digit != 0 && tens_digit != 1) {
        printf("-");
    }

    switch (ones_digit) {
        case 9:
            printf("nine");
            break;
        case 8:
            printf("eight");
            break;
        case 7:
            printf("seven");
            break;
        case 6:
            printf("six");
            break;
        case 5:
            if (tens_digit == 1){
                printf("fifteen\n");
            }
            else {
                printf("five");
            }
            break;
        case 4:
            printf("four");
            break;
        case 3:
            if (tens_digit == 1){
                printf("thirteen\n");
            }
            else {
                printf("three");
            }
            break;
        case 2:
            if (tens_digit == 1){
                printf("twelve\n");
            }
            else {
                printf("two");
            }
            break;
        case 1:
            if (tens_digit == 1){
                printf("eleven\n");
            }
            else {
                printf("one");
            }
            break;
        default:
            break;
    }
    
    if (number == 10) {
        printf("ten\n");
    }
    else if (tens_digit == 1 && ones_digit != 3 && ones_digit != 2 && ones_digit != 1) {
        printf("teen\n");
    }

    return 0;
}
