#include <stdio.h>

int main()
{
    int i, j, k = 97, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++, k++)
        {
            printf("%c", k);
        }

        printf("\n");
    }

    return 0;
}