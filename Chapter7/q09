/* program that converts 12-hour time to 24-hour form */

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    short hour, minute;
    char time_of_day;

    printf("\nEnter a 12-hour time: ");
    scanf("%hd:%hd", &hour, &minute);
    scanf(" %c", &time_of_day); // only ignores one space

    if (hour > 12 || minute > 60) {
        printf("Invalid 12-hour time inputted\n");
        return 0;
    }

    time_of_day = toupper(time_of_day);

    if (time_of_day != 'A' || time_of_day != 'P') {
        printf("Invalid character inputted\n");
        return 0;
    }

    if (time_of_day == 'A' && hour == 12) {
        printf("Equivalent 24-hour time: 0:%hd\n", minute);
    }
    else if (time_of_day == 'P' && hour == 12) {
        printf("Equivalent 24-hour time: %hd:%hd\n", hour, minute);
    }
    else if (time_of_day == 'A') {
        printf("Equivalent 24-hour time: %hd:%hd\n", hour, minute);
    }
    else if (time_of_day == 'P') {
        printf("Equivalent 24-hour time: %hd:%hd\n", hour + 12, minute);
    }

    return 0;
}
