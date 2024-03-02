// Hollow Rhombus Star Pattern in C

#include <stdio.h>

int main()
{
    int i, j, space, n;
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (space = 1; space <= i - 1; space++)

        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}