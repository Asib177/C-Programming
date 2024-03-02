#include <stdio.h>

int main()
{
    int i, space, j, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == j)
                printf("N");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}