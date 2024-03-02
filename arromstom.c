#include <stdio.h>

int main()
{
    int sum, r, temp, n1, n2, i;
    printf("Enter Two number: ");
    scanf("%d %d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        temp = i;
        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if (sum == i)
            printf("%d\n", i);
        sum = 0;
    }

    return 0;
}