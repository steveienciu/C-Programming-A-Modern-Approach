/* print a one month calendar where user specifies the day on which the month begins */

#include <stdio.h>

int main(void)
{
    int days_in_month, start_day;

    printf("\nEnter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf("\n");

    int i = 1;
    while (i < start_day) {
        printf("\t");
        ++i;
    }

    for (int i = 1; i <= days_in_month; ++i) {
        if (i % 7 != (7 - (start_day - 1))) {
            printf("%d\t", i);
        }
        else if (i % 7 == (7 - (start_day - 1))) {
            printf("%d\n", i);
        }
    }

    return 0;
}
