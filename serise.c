#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the row size: ");
    scanf("%d ", &rows);
    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}