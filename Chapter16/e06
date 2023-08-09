/* use structure to store time and create function to return the time */

#include <stdio.h>
#include <stdlib.h>

struct time {
    int hours, minutes, seconds;
};

struct time split_time (long total_seconds)
{
    struct time t;

    if (total_seconds > 82800) {
        printf("Number is too large\n");
        exit(0);
    }

    int remainder;

    t.hours = total_seconds / 3600;
    remainder = total_seconds % 3600;

    t.minutes = remainder / 60;
    remainder = remainder % 60;

    t.seconds = remainder;

    return t;
}

int main(void)
{
    long total_seconds;
    struct time t;

    printf("\nEnter number of seconds: ");
    scanf("%ld", &total_seconds);

    t = split_time(total_seconds);

    printf("%ld is converted to hr:min:sec format is: %d:%d:%d\n", total_seconds, t.hours, t.minutes, t.seconds);

    return 0;
}
