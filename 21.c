//Floyd's Triangle in C

#include <stdio.h>

int main()
{
    int i, j, k = 1, n;
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}