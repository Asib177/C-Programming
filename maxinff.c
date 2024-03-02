#include <stdio.h>
int maxFunc(int x[]);

int main()
{
    int num[] = {10, 20, 30, 15};
    int result = maxFunc(num);
    printf("%d", result);

    return 0;
}

int maxFunc(int x[])
{
    int i;
    int max = x[0];
    for (i = 1; i < 4; i++)
    {
        if (max < x[i])
            max = x[i];
    }
    return max;
}
