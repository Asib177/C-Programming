#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", powCalc(a, b));
    return 0;
}

int powCalc(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= y; i++)
    {
        res *= x;
    }
    return res;
}
