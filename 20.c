// Pascal's Triangle in C

#include <stdio.h>

int main()
{
    int i, j, space, k, n;
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (k = i, j = 1; j <= i; j++, k++)
        {
            printf("%d", k);
        }

        for (k = 2 * i - 2, j = 1; j <= i - 1; j++, k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}