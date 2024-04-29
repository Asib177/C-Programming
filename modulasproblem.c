#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        int newNumber = num * (-1);
        printf("Output: %d\n", newNumber);
    }
    else
    {
        printf("Output: %d\n", num);
    }

    return 0;
}
