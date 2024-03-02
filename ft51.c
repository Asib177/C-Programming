#include <stdio.h>

double Power(double base, int exponent);

int main()
{
    double base, power;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    power = Power(base, exponent);

    printf("%.2lf ^ %d = %f", base, exponent, power);

    return 0;
}

double Power(double base, int exponent)
{
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * pow(base, exponent - 1);
    else
        return 1 / pow(base, -exponent);
}