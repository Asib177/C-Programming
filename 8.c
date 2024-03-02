// Full Hollow Inverted Pyramid in C

#include <stdio.h>

int main(void)
{
    int rows, space, colume, i;
    printf("Enter the rows number: ");
    scanf("%d", &rows);
    printf("\n");

    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (colume = 1; colume <= 2 * i - 1; colume++)
        {
            if (colume == 1 || i == rows || colume == 2 * i - 1)
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
