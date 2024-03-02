#include <stdio.h>

int main()
{
    int i, j, k = 1, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == (n + 1) / 2 || j == (n + 1) / 2)
                printf("+");
                else
                printf(" ");
        }

        printf("\n");
    }
}
