#include <stdio.h>
int main()
{

    int a;

    scanf("%d", &a);
    GetNthPrime(a);
    return 0;
}

int isPrime(int n)
{
    int flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return 0;
    else
        return 1;
}

void GetNthPrime(int n)
{

    int count = 0;

    for (int i = 2; i < 999999; i++)
    {

        if (isPrime(i) == 1)
        {
            count++;

            if (count == n)
            {
                printf("%d ", i);
                break;
            }
        }
    }
}
