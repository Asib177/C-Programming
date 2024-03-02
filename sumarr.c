#include <stdio.h>
#define N 100

int main()
{
    int array[N];
    int i, num, sum=0;
    printf("Enter number:\n");
    scanf("%d", &num);

    printf("Enter the array element:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    // printf("Sum of array:\n");
    for (i = 0; i < num; i++)
    {
        sum += array[i];
    }
    printf("Sum = %d", sum);
    return 0;
}