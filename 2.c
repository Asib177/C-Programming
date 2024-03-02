//Hollow Rectangular star Pattern in C

#include <stdio.h>

int main()
{
    int rows, colume, i, j;
    printf("Enter the rows number: ");
    scanf("%d", &rows);
    printf("Enter the colume number: ");
    scanf("%d", &colume);

    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colume; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == colume)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}