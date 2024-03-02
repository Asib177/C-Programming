#include <stdio.h>

int main()
{
    int grp[10], i;

    while (1)
    {
        printf("%d\n", rand() % 10 + 1);
        scanf("%d", &i);
    }

    return 0;
}