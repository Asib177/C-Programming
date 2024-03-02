#include <stdio.h>
#define N 100

int main()
{
    int array[N];
    int i, num, count = 0;

    printf("Enter the input:\n");
    scanf("%d", &num);

    printf("Enter the array element:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The number read & print:\n");
    for (i = 0; i < num; i++)
    {
        printf(" %d", array[i]);
        if (array[i] < num)
        {
            printf(",");
        }
    }

    return 0;
}