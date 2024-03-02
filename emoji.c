// Half Pyramid of Alphabets in C

#include <stdio.h>

int main()
{
    int i, j, k = 65, n;
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (k = 1, j = 1; j <= i; j++, k++)
        {
            printf("%c ", k);
        }
        printf("\n");
    }
    return 0;
}