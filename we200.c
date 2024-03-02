#include <stdio.h>
int powerFunc(int, int);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = powerFunc(x, y);
    printf("%d to the power %d is %d", x, y, result);

    return 0;
}

int powerFunc(int a, int b)
{
    int power = pow(a, b);
    return power;
}