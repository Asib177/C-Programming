#include <stdio.h>
void sumfunc(int);
int sum = 0;

int main()
{
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sumfunc(x);
    }

    printf("\nSum in Function: %d", sum);
    printf("\nSum in Main: %d", sum);
    return 0;
}

void sumfunc(int a)
{
    sum += a;

    return sum;
}
