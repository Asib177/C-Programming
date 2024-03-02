#include <stdio.h>
int main()
{

    int a;

    scanf("%d", &a);
    isPrime(a);
    return 0;
}

void isPrime(int n)
{
    int flag = 0; // number is prime

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Not prime");
    else
        printf("prime");
}