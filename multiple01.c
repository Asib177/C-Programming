#include <stdio.h>

int main()
{
    float num1, num2, multiple;

    printf("Enter any two numbers: ");
    scanf("%f %f", &num1, &num2);

    multiple = num1 * num2;
    printf("Multiple number is: %.2f", multiple);

    return 0;
}