/* uses chapter 5 q09 and generalized to find earliest date between many dates *
#include <stdio.h>

int main(void) 
{
    int mm, dd, yy;
    int mm_min = 13, dd_min = 32, yy_min = 100;

    printf("\nEnter a date (mm/dd/yy): ");

    while ((scanf("%d/%d/%d", &mm, &dd, &yy)) && (mm != 0 || dd != 0 || yy != 0)) {
        if (yy < yy_min) {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
        }
        else if (yy == yy_min && mm < mm_min) {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
        }
        else if (yy == yy_min && mm == mm_min && dd < dd_min) {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
        }

        printf("\nEnter a date (mm/dd/yy): ");
    }

    printf("\n%d/%d/%d is the earliest date\n", mm_min, dd_min, yy_min);

    return 0;
}
