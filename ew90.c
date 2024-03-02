#include <stdio.h>
int factFunc(int);

int main()
{
    int n;
    scanf("%d", &n);

    int result = factFunc(n);
    printf("%d", result);

    return 0;
}

int factFunc(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}