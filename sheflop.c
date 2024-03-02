#include <stdio.h>

int main()
{
    int i, j, rows, n;
    printf("Enter the number: ");
    scanf("%d", &rows);
    printf("\n");

    n = (rows + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == n || j == n)
                printf("0 ");
            else
                printf("%d ", j);
        }
        printf("\n");
    }

    for (i = rows - n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}