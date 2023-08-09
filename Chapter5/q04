/* program that takes user input of wind speed in knots then displays the corresponding description */

#include <stdio.h>

int main(void)
{
    float wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if (wind_speed < 0) {
        printf("\nCannot not have negative wind\n");
    }
    else if (wind_speed < 1) {
        printf("\nThe air is calm\n");
    }
    else if (wind_speed <= 3) {
        printf("\nThere is a light breeze\n");
    }
    else if (wind_speed <= 27) {
        printf("\nThere is a breeze outside\n");
    }
    else if (wind_speed <= 47) {
        printf("\nGale wind speeds\n");
    }
    else if (wind_speed <= 63) {
        printf("\nThere is a storm outside\n");
    }
    else {
        printf("\nThere is a hurricane\n");
    }
    
    return 0;
}
