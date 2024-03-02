#include <stdio.h>
void Func(int, int);
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    Func(n1, n2);

    return 0;
}

void Func(int a, int b)
{
    if (a > b)
        printf("%d is greater than %d", a, b);
    else if (a < b)
        printf("%d is less than %d", a, b);
    else if (a == b)
        printf("%d is equal to %d", a, b);
}