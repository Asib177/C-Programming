#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the row size: ");
    scanf("%d", &rows);
    printf("\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}