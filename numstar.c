#include <stdio.h>

int main()
{
    int i, j=1, rows, colume;
    printf("Enter thr number: ");
    scanf("%d", &rows);

    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (colume = 1; colume <= i; colume++,j++)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}