/* prompts user to enter numbers 1 thorugh 16 in any order and displays in 4x4 arrangment, followed by sums of rows, columns, and diagonals */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    int rsum1, rsum2, rsum3, rsum4, csum1, csum2, csum3, csum4, dsum1, dsum2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14,
     &num15, &num16);
    printf("\n%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n\n", num13, num14, num15, num16);

    rsum1 = num1 + num2 + num3 + num4;
    rsum2 = num5 + num6 + num7 + num8;
    rsum3 = num9 + num10 + num11 + num12;
    rsum4 = num13 + num14 + num15 + num16;

    csum1 = num1 + num5 + num9 + num13;
    csum2 = num2 + num6 + num10 + num14;
    csum3 = num3 + num7 + num11 + num15;
    csum4 = num4 + num8 + num12 + num16;

    dsum1 = num1 + num6 + num11 + num16;
    dsum2 = num4 + num7 + num10 + num13;

    printf("Row sums: %d %d %d %d\n", rsum1, rsum2, rsum3, rsum4);
    printf("Column sums: %d %d %d %d\n", csum1, csum2, csum3, csum4);
    printf("Diagonal sums: %d %d\n", dsum1, dsum2);

    return 0;
}
