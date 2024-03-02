#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i, j = 1; j <= i; j++, k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}