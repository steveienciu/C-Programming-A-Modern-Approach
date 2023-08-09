/* reads date from command line and displays it in following form: September 13, 2010 */

#include <stdio.h>
#include <stdlib.h>

void month_error(int);
void day_error(int);
void year_error(int);

int main(void)
{
    int month, day, year;
    char date[11];
    const char *string_month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Novemeber", "December"};

    fprintf(stdout, "\nPlease enter a date using either '-' or '/', exclusively: ");
    fgets(date, sizeof(date), stdin);
    
    if (sscanf(date, "%d-%d-%d", &month, &day, &year) == 3) {
        month_error(month);
        day_error(day);
        year_error(year);
        fprintf(stdout, "%s %d, %d", string_month[month - 1], day, year);
    }
    else if (sscanf(date, "%d/%d/%d", &month, &day, &year) == 3) {
        month_error(month);
        day_error(day);
        year_error(year);
        fprintf(stdout, "%s %d, %d", string_month[month - 1], day, year);
    }
    else {
        fprintf(stderr, "Invalid format of the date.\n");
    }
    printf("\n");

    return 0;
}

void month_error(int n)
{
    if (n > 12 || n < 0) {
        fprintf(stderr, "Invalid month.\n");
        exit(0);
    }
}

void day_error(int n)
{
    if (n > 31 || n < 0) {
        fprintf(stderr, "Invalid day.\n");
        exit(0);
    }
}

void year_error(int n)
{
    if (n > 2030 || n < 1200) {
        fprintf(stderr, "Invalid year.\n");
        exit(0);
    }
}
