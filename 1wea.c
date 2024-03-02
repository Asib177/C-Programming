#include <stdio.h>
int minFunc(int x[]);

int main()
{
    int num[] = {10, 20, 30, 15};
    int result = minFunc(num);
    printf("%d", result);

    return 0;
}

int minFunc(int x[])
{
    int i;
    int min = x[0];
    for (i = 1; i < 4; i++)
    {
        if (min > x[i])
            min = x[i];
    }
    return min;
}
