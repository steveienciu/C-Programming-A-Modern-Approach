/* program that converts numerical grade into letter grade */

#include <stdio.h>

int main(void)
{
    int tens_digit, grade;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    tens_digit = grade / 10;
    
    switch (tens_digit) {
        case 9: case 10:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("Letter grade: F");
            break;
        default: 
            printf("Invalid input");
            break;
    }

    return 0;
}
