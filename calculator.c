#include <stdio.h>
int main()
{
    char op;
    float num1, num2, result=0;
    printf("Enter the numbers: \n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }

    /* Prints the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}
