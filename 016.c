#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || j == (n - i) + 1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}
