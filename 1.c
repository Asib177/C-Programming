//Solid Rectangular Star Pattern in C


#include <stdio.h>

int main()
{
    int rows, colums, i, j;

    printf("Entre the rows number: ");
    scanf("%d", &rows);

    printf("Enter the colums number: ");
    scanf("%d", &colums);

    printf("\n");
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= colums; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}