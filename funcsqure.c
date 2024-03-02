#include <stdio.h>
int squre(int);

int main()
{
    int n;
    scanf("%d", &n);

    int result = squre(n);
    printf("Squre is: %d", result);

    return 0;
}

int squre(int a)
{
    return a * a;
}