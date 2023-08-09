/* program that displays the largest and smallest integer where user inputs 4 integers */

#include <stdio.h>

int main(void) 
{
    int a1, a2, a3, a4, min1, max1, max2, min2, max_final, min_final;

    printf("Enter four digits: ");
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    if (a1 > a2){
        max1 = a1;
        min2 = a2;
    }
    else {
        max1 = a2;
        min2 = a1;
    }

    if (a3 > a4) {
        max2 = a3;
        min2 = a4;
    }
    else {
        max2 = a4;
        min2 = a3;
    }

    if (max1 > max2) {
        max_final = max1;
    }
    else {
        max_final = max2;
    }

    if (min1 < min2) {
        min_final = min1;
    }
    else {
        min_final = min2;
    }   

    printf("\nLargest: %d\n", max_final);
    printf("Smallest: %d\n", min_final);

    return 0;
}
