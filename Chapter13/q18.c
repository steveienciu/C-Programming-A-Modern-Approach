/* program that conerts mm/dd/yy to month day, year format */

#include <stdio.h>
#include <string.h>

int main(void) 
{
    int mm, dd, yy;
    char *months[] = { "Janruary", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    printf("\nEnter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &mm, &dd, &yy);

    printf("You entered the date %s %d, %d\n", months[mm -1], dd, yy);

    return 0;
}
