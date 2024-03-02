// Palindrome Half Pyramid Pattern Using Numbers in C

#include <stdio.h>

int main()
{
    int i, j, k, rows;
    scanf("%d", &rows);

    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return (0);
}