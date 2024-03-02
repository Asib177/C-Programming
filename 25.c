// Hour Glass Star Pattern in C

#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    printf("\n");

    printf("\n");
    // 1st Part
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (j = i; j <= n; j++)
        {
            printf("*");

            printf(" ");
        }

        printf("\n");
    }

    // 2nd Part
    for (i = n - 1; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (j = i; j <= n; j++)
        {
            printf("*");

            printf(" ");
        }

        printf("\n");
    }
    return 0;
}