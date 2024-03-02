#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter number: ");
    scanf("%d ", &n);
    
    printf("Output is: ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("1", i);
        }
        else if (i % 2 == 0)
        {
            printf("0");
        }
        if (i < n)
        {
            printf(", ");
        }
    }

    return 0;
}