#include <stdio.h>
#define N 100

int main()
{
    int array[N];
    int i, num, even = 0, odd = 0;
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
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even Number: %d\n",even);
    printf("Odd Number: %d",odd);
    return 0;
}