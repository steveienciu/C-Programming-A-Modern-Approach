/* program that calculates broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, commission_rival, price_per_share, total; 
    int number_of_shares;

    printf("Enter number of shares: ");
    scanf("%d", &number_of_shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    total = price_per_share * number_of_shares;
    printf("\n\n%0.2f", total);

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

    if (number_of_shares < 2000) {
        commission_rival = 33 + number_of_shares * 0.03;
    }
    else if (number_of_shares >= 2000) {
        commission_rival = 33 + number_of_shares * 0.02;
    }

    printf("\n\nCommission of orginal broker: $%.2f\n", commission);
    printf("Commission of rival broker: $%.2f\n", commission_rival);

    return 0;
}
