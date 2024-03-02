#include <stdio.h>

int main()
{
    int i, j, n, row, k = 1, l = 1, space;
    printf("Enter the number: ");
    scanf("%d", &row);

    n = (row + 1) / 2;
    for (i = n; i >= 1; i--)
    {
        for (space = i; space <n; space++)
        {
            printf(" ");
        }
        for (j = (2 * i) - 1; j >= 1; j--)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    for (i = 1; i <= row - n; i++)
    {
        for (space = i; space < row-n; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) + 1; j++)
        {
            printf("%d", l++);
        }
        printf("\n");
    }

    return 0;
}