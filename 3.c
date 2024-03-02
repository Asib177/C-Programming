//Half Pyramid Star Pattern in C

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter any posative number: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}