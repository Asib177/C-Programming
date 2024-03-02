// Half Diamond Star pattern in C

#include <stdio.h>
//#define max

int main()
{
    int i, rows, colume;
    printf("Enter the row number: ");
    scanf("%d", &rows);

    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (colume = 1; colume <= i; colume++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--)
    {
        for (colume = 1; colume <= i; colume++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}