/* program that takes two dates and outputs date that comes earlier on calendar */

#include <stdio.h>

int main(void) 
{
    int mm1, mm2, dd1, dd2, yy1, yy2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy1 < yy2) {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }
    else if (yy1 == yy2 && mm1 < mm2) {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }
    else if (yy1 == yy2 && mm1 == mm2 && dd1 < dd2) {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }
    else if (yy1 > yy2 || mm1 > mm2 || dd1 > dd2) {
        printf("\n%d/%d/%0.2d is earlier than %d/%d/%0.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    }

    return 0;
}
