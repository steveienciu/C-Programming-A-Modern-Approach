/* add loop to broker program from chapter 5 q02 so can enter more than one trade and program will calculate commission on each */

#include <stdio.h>

int main(void) 
{
    float commission, total; 

    printf("\nEnter value of trade (enter '0' once complete): ");

    while (scanf("%f", &total) && total != 0) {
        if (total < 2500) {
            commission = 30 + 0.017 * total;
        }
        else if (total < 6250) {
            commission = 56 + 0.0066 * total;
        }
        else if (total < 20000.00f) {
            commission = 76.00f + 0.0034f * total;
        }
        else if (total < 50000) {
            commission = 100 + 0.0022 * total;
        }
        else if (total < 500000) {
            commission = 155 + 0.0011 * total;
        }
        else {
            commission = 255 + 0.0009 * total;
        }

        if (commission < 39) {
            commission = 39;
        }

        printf("Commission: $%0.2f", commission);
        printf("\n\nEnter value of trade: ");
    }
}
