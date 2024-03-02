#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter any four number:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is max", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is max", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%d is max", c);
    }
    else
    {
        printf("%d is max", d);
    }

    printf("\n");
    if (a <= b && a <= c && a <= d)
    {
        printf("%d is min", a);
    }
    else if (b <= a && b <= c && b <= d)
    {
        printf("%d is min", b);
    }
    else if (c <= a && c <= b && c <= d)
    {
        printf("%d is min", c);
    }
    else
    {
        printf("%d is min", d);
    }

    return 0;
}