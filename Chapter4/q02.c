/* Same as chapter 4 q01 but deal with 3 digits instead of 2
*/

#include <stdio.h>

int main(void)
{
    int num, d1, d2, d3, help;

    printf("Enter a three-digit number: ");
    scanf("%3d", &num);

    d1 = num % 10;
    help = (num - d1) / 10;
    d2 = (help) % 10;
    d3 = ((help - d2) / 10) % 10;

    printf("The reversal is: %1d%1d%1d", d1, d2, d3);

    return 0;
}
