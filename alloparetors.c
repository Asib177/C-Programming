#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mod, multi;
    float div;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mod = num1 % num2;
    multi = num1 * num2;
    div = (float)num1 / num2;

    printf("Sum is: %d\n", sum);
    printf("Sub is: %d\n", sub);
    printf("Mod is: %d\n", mod);
    printf("Multi is: %d\n", multi);
    printf("Div is: %f\n", div);
    return 0;
}