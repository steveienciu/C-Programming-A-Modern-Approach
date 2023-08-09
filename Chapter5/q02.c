/* program that converts 24-hour time to 12-hour form */

#include <stdio.h>

int main(void)
{
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour < 0 || min > 60) {
        printf("Error: Invalid 24-hour time");
    }
    else if(hour < 13 && hour != 0) {
        printf("Equivalent 12-hour time: %d:%0.2d AM", hour, min);
    }
    else if(hour > 12 && hour != 24) {
        hour = hour - 12;
        printf("Equivalent 12-hour time: %d:%d PM", hour, min);
    }
    else if(hour == 24 || hour == 0) {
        hour = 12;
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, min);
    }

    return 0;
}
