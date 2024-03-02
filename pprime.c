#include <stdio.h>
int primeChecker(int);
int arromstomChecker(int);

int primeChecker(int a)
{
    if (a == 0 || a == 1)
        return -1;

    int count = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
            break;
            return -1;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int chk1 = primeChecker(n);
    if (chk1 == 1)
        printf("Prime");
    if (chk1 == -1)
        printf("Not Prime");
    return 0;
}