// Solid Full Diamond Pattern in C

#include <stdio.h>

int main()
{
    int i, j, space, rows;
    printf("Enter the row number: ");
    scanf("%d", &rows);
    printf("\n");
    // 1st part
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= i-1; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= rows-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 2nd part
    for (i = 1; i <= rows-1; i++)
    {
        
        for (space = 1; space<rows-i; space++)
        {
            printf(" ");
        }
       for (j = 1; j <= i+1; j++)
    
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}