#include <stdio.h>
int sum(int a)
{
    int r = 0;
    for (int i = 1; i <= a; i++)
    {
        r = r + i;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d", &n);

    // int result=sum(n);
    printf("%d", sum(n));

    return 0;
}