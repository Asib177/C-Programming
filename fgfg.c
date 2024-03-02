#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1, j = 1; j <= n; j++, k++)
        {
            printf("%d", k * k);
        }

        printf("\n");
    }

    return 0;
}