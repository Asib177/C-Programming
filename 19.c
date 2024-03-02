// Hollow Mirrored Rhombus Star Pattern

#include <stdio.h>

int main()
{
    int i, j, space, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
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