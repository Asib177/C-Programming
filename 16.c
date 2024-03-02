//Solid Rhombus Star Pattern in C

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
            printf("*");
        }

        printf("\n");
    }

    return 0;
}