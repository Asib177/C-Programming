#include <stdio.h>
int primeChecker(int);

int arromstomChecker(int a)
{
    int temp = a, r, sum = 0;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if (sum == a)
        return 1;
    else
        return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int chk2 = arromstomChecker(n);
    if (chk2 == 1)
        printf("Arromstom");
    else
        printf("Not Arromstom");
    return 0;
}