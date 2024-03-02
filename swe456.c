#include <stdio.h>
int main()
{

    int a;

    scanf("%d", &a);
    GeneratePrime(a);
    return 0;
}

void GeneratePrime(int n)
{
    int flag = 0; // number is prime

    for (int i = 2; i < n; i++)
    {
     
        if (isPrime(i) == 1)
            printf("%d ", i);
    }
}

int isPrime(int n)
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
        return 0;
    else
        return 1;
}

/*void GeneratePrime(int n)
{
    int flag = 0; // number is prime

    for (int i = 2; i < n; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);
    }
}*/