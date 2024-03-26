#include <stdio.h>

int main()
{
    int a = 18;
    int b = 7;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int remainder = a % b;

    printf("%d + %d = %d", a, b, addition);

    return 0;
}