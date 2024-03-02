#include <stdio.h>

int main()
{
    int i, j, n, k = 1, sum = 0;
    printf("Enter the input: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    sum += (i - 1) * (j - 1);
    printf("\nSum is: %d", sum);

    return 0;
}