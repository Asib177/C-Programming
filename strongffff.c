#include <stdio.h>

int main()
{
    int i, a, r, temp, sum = 0;
    scanf("%d", &a);

    temp = a;
    while (temp != 0)
    {
        r = temp % 10;
        int fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == a)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}