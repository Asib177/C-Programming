#include <stdio.h>

int main()
{
    int i, a;
    scanf("%d", &a);

    for (i = 2; i <= a; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}