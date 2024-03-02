#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    powerCalc(&x, &y);
    return 0;
}

void powerCalc(int *x, int *y) /// x to the power y
{
    int *c;

    *c = *x;
    *x = *y;
    *y = *c;

    printf("%d %d", *x, *y);
}