// Palindrome Half Pyramid Patterns in Alphabets

#include <stdio.h>

int main()
{
    int i, j, rows, c = 0;
    scanf("%d", &rows);
    printf("\n");

    for (i = 1; i <= 2 * rows; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + c);
            if (j <= i / 2)
                c++;
            else
                c--;
        }
        c = 0;
        printf("\n");
    }
    return 0;
}