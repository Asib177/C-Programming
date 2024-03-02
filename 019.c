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
            if (i == 1 || i == n || j == (n - i) + 1)
                printf("Z");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}