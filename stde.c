#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    powerCalc(x, y);
    return 0;
}

void powerCalc(int x, int y) /// x to the power y
{
    int res = 1;
    for (int i = 1; i <= y; i++)
    {

        res *= x;
    }

    printf("%d to the power %d = %d", x, y, res);
}