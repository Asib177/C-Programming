#include <stdio.h>

int main()
{
    int i, j, rows, n;
    scanf("%d", &rows);
    n = 2 * rows - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || j == (n - i) + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}