/* modify chapter 5 q09 so that each date entered by user stored in date structure */

#include <stdio.h>

struct date {
    int month, day, year;
} date1, date2;

int compare_dates(struct date d1, struct date d2);

int main(void) 
{
    int value;

    printf("\nEnter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);

    value = compare_dates(date1, date2);

    if (value) {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
    }
    else {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
    }

    return 0;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year) {
        return 1;
    }
    else if (d1.year == d2.year && d1.month < d2.month) {
        return 1;
    }
    else if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day) {
        return 1;
    }
    else {
        return 0;
    }
}
