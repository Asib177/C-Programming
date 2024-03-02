#include <stdio.h>

// start and end and sum of square checker
int checkerFunc1(int a)
{

    int chk = a;
    int lastDigit, firstDigit;
    int sum = 0;

    while (chk != 0)
    {
        int rem = chk % 10;
        sum += rem;
        if (chk == a)
            lastDigit = rem;
        chk = chk / 10;
        if (chk == 0)
            firstDigit = rem;
    }

    if (firstDigit == 1 && lastDigit == 1 && (sum * sum) % 8 == 0)
    {
        return 1;
    }

    else
        return -1;
}

// primeChecker
int checkerFunc2(int a)
{
    int isPrime = 1;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            isPrime = 0;
    }

    if (isPrime == 1)
        return 1;
    else
        return -1;
}

int vecna(int a)
{
    // start and end and sum of square checker
    int chk1 = checkerFunc1(a);
    // primeChecker
    int chk2 = checkerFunc2(a);

    if (chk1 == 1 && chk2 == 1)
        return 1;
    else
        return -1;
}

int main()
{

    int r1, r2;
    scanf("%d %d", &r1, &r2);

    for (int i = r1; i <= r2; i++)
    {
        int flag = vecna(i);

        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}