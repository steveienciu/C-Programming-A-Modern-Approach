/* program that evaluates expression ignoring PEDMAS */

#include <stdio.h>

int main(void) 
{
    float number1, number2, result = 0;
    char operator;

    printf("\nEnter an expression: ");
    scanf("%f", &number1);

    while ((operator = getchar()) != '\n') {
        switch (operator) {
            case '+': 
                scanf("%f", &number2);
                number1 += number2;
                break;
            case '-':
                scanf("%f", &number2);
                number1 -= number2;
                break;
            case '*':
                scanf("%f", &number2);
                number1 *= number2;
                break;
            case '/':
                scanf("%f", &number2);
                number1 /= number2;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %0.2f\n", number1);

    return 0;
}
