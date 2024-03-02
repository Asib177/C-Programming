#include <stdio.h>
#define N 100

int main()
{
    int array[N];
    int i, num;

    printf("Enter the input:\n");
    scanf("%d", &num);

    printf("Enter the array element:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Negative number of array:\n");
    for (i = 0; i < num; i++)
    {
        if (array[i] < 0)
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}