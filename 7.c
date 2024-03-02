//Inverted Hollow Half pyramid in C

#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the row size: ");
    scanf("%d ", &rows);
    printf("\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == rows || j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}