#include <stdio.h>
int fact(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int result = fact(n);

    printf("%d", result);
    return 0;
}

int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}
