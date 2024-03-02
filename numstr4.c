#include <stdio.h>

int main()
{
    int i, j = 1, space, colume, rows;

    printf("Enter number:\n");
    scanf("%d", &rows);
    printf("\n");

    printf("Output is:\n");
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (colume = 1; colume <= 2 * i - 1; colume++)
        {
            if (i == rows || colume == 1 || colume == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf("%d", j++);
            }
        }
        printf("\n");
    }

    return 0;
}