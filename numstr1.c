#include <stdio.h>

int main()
{
    int i,j, colume, rows;

    printf("Enter number:\n");
    scanf("%d", &rows);
    printf("\n");

    printf("Output is:\n");
    for (i = 1; i <= rows; i++)
    {
        for (j=i, colume = 1; colume <= i; colume++,j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}