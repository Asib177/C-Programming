#include <stdio.h>
int main()
{
    int i, n, j, x;
    scanf("%d", &x);
    if (x % 2 != 0)
    {
        n = x / 2 + 1;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
            {
                printf("_");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || j == 2 * i - 1 || j == (2 * i - 1) / 2 + 1 || i == n)
                    printf("$");
                else
                    printf("_");
            }
            for (j = n - i; j >= 1; j--)
            {
                printf("_");
            }
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--)
        {
            for (j = 1; j <= n - i; j++)
            {
                printf("_");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || j == 2 * i - 1 || j == (2 * i - 1) / 2 + 1 || i == n)
                    printf("$");
                else
                    printf("_");
            }
            for (j = n - i; j >= 1; j--)
            {
                printf("_");
            }
            printf("\n");
        }
    }
    return 0;
}