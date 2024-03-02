#include <stdio.h>

int main()
{
    int i, n, j;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)

        {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else if (i % 2 == 0)
                printf("_");
            else if (i % 2 != 0)
                printf("*");
        }

        printf("\n");
    }

    return 0;
}