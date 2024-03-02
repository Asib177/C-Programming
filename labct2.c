#include <stdio.h>

int sectumSempra(int a);
int checkerFunc1(int a);
int checkerFunc2(int a);
int checkerFunc3(int a);
int checkerFunc4(int a);
int strongChecker(int a);
int defectiveChecker(int a);

int checkerFunc2(int a)
{
    int temp = 0;
    temp = a;
    int count = 0;
    int q;
    while (temp != 0)
    {
        count++;                                                                                                                                                                                                                                                                                                            
        temp = temp / 10;
    }

    q = count;
    int r = 0;
    while (temp != 0)
    {
        r = temp % 10;
        if (((q % 2 == 0 && r % 2 != 0) || (q % 2 != 0 && r % 2 == 0)) == 0)

            return -1;

        q--;

        temp = temp / 10;
    }
    return 1;
}

int sectumSempra(int a)
{
    int chk1 = checkerFunc1(a);
    int chk2 = checkerFunc2(a);
    int chk3 = checkerFunc3(a);
    int chk4 = checkerFunc4(a);
    if (chk1 == 1 && chk2 == 1 && chk3 == 1 && chk4 == 1)
        return 1;
    else
        return -1;
}

int checkerFunc1(int a)
{
    int temp = a, firstDigit, lastDigit;
    while (temp != 0)
    {
        int r = temp % 10;
        if (temp == a)
            lastDigit = r;
        temp = temp / 10;
        if (temp == 0)
            firstDigit = r;
    }

    if (firstDigit == 1 || firstDigit == 7)
    {
        if (lastDigit == 2 || lastDigit == 9)

            return 1;
        else
            return -1;
    }
    else
        return -1;
}

int checkerFunc4(int a)
{
    int count = 0;
    int sum = 0;
    int temp = a;
    while (temp != 0)
    {
        int r = temp % 10;
        sum = sum + r * r;
        count++;
        temp = temp / 10;
    }
    if (count >= 2 && sum % 7 == 0)
        return 1;
    else
        return -1;
}

int checkerFunc3(int a)
{
    int chkStrong = strongChecker(a);
    int chkDefective = defectiveChecker(a);

    if (chkStrong == 1 && chkDefective == -1)

        return 1;

    else
        return -1;
}

int defectiveChecker(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            sum = sum + i;
    }
    if (sum < (2 * a))
        return 1;
    else
        return -1;
}

int strongChecker(int a)
{
    int i, temp = a, sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        int fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
        if (sum == a)
            return 1;
        else
            return -1;
    }
}

int main()
{
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    for (int i = r1; i <= r2; i++)
    {
        int flag = checkerFunc2(i);
        if (flag == 1)
            printf("%d\n", i);
    }

    return 0;
}