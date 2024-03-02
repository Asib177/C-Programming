#include <stdio.h>
int sum = 0;
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        sumc(x);
    }
    printf("\nSum in function %d", sum);
    printf("\nSum in main %d", sum);
    return 0;
}
int sumc(int x)
{
    sum += x;
    return sum;
}