#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter the element:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nGiven Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int rev[row][col], m = 0, n = 0;
    for (int i = row - 1; i >= 0; i--)
    {
        n = 0;
        for (int j = col - 1; j >= 0; j--)
        {
            rev[m][n] = arr[i][j];
            n++;
        }
        m++;
    }
    
    printf("\nRevers matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", rev[i][j]);
        }
        printf("\n");
    }

    return 0;
}