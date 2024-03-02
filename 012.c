#include <stdio.h>

int main()
{
    int i, space, n, j, k;
    printf("Enter the Number: ");
    scanf("%d", &n);

    k = (n + 1) / 2;
    for (i = 1; i <= k; i++)
    {
        for (space = 1; space <=k- i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)

        {
            printf("*");
        }

        printf("\n");
    }
    for (i = k - 1; i >= 1; i--)
    {
        for (space = 1; space <= k - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)

        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}