#include <stdio.h>

int sum = 0;

int recur1(int a, int temp)
{

    if (a == 1)
    {
        printf("%d ", a);
        temp = a;

        return temp;
    }
    int chk = recur1(a - 1, temp);
    if (a % 2 == 0)
    {
        printf("* %d ", a);
        temp = a * chk;
        sum += temp;
    }
    else
    {
        printf("+ %d ", a);
        temp = a;
    }
    return temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = recur1(n, 0);
    if (n % 2 == 0)
        printf(" = %d", sum);
    else
        printf(" = %d", sum + result);
}