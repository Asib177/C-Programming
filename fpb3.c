#include <stdio.h>
int cubFunc(int a);

int cubFunc(int a)
{
    return (a*a*a);
}

int main()
{
    int n;
    scanf("%d", &n);

    int flag = cubFunc(n);
        printf("Cube Number %d: %d", n, flag);

    return 0;
}