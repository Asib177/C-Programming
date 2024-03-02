#include <stdio.h>

int main()
{
    int i, n, count = 0;
    // printf("Enter any posative Number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Prime");

    else
        printf("Not Prime");

    return 0;
}