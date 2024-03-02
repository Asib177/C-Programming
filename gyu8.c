#include <stdio.h>
int isPrime(int);

int main()
{
    int n;
    scanf("%d", &n);
    int result = isPrime(n);
    if (result == 1)
        printf("Prime");
    if (result == -1)
        printf("Not Prime");

    return 0;
}

int isPrime(int a)
{
    if (a == 1 || a == 0)
        return -1;
    int flag = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag=1;
            break;
            return -1;
        }
    }

    return 1;
}