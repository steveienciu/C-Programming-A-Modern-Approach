/* modify chapter 5 q11 so it uses arrays containing pointers to strings instead of switch statements */

#include <stdio.h>
#include <string.h>

int main(void)
{
    // possible con or pointer to string is cannot really manipulate string inside since has fixed number of memory addresses

    char *tens_digit_str[] = { "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty" };
    char *ones_digit_str[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char *weird_str[] = { "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char number_str[20]; // cannot use pointer to string because needs enough memory addresses to allocate for items to be stored inside 

    int tens_digit, ones_digit, number;

    printf("\nEnter a two-digit number: ");
    scanf("%d", &number);

    ones_digit = number % 10;
    tens_digit = number / 10;

    printf("You entered the number ");

    if (tens_digit == 1 && ones_digit == 0) {
        printf("%s\n", tens_digit_str[tens_digit - 1]);
    }
    else if (tens_digit == 1) {
        printf("%s\n", weird_str[ones_digit - 1]);
    }
    else {
        strcpy(number_str, tens_digit_str[tens_digit - 1]);
        strcat(number_str, "-");
        strcat(number_str, ones_digit_str[ones_digit - 1]);
        printf("%s\n", number_str);
    }

    return 0;
}
