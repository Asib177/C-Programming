#include <stdio.h>
int isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
            return flag;
        }
    }
    return flag;
}

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;

    if(flag == 0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}