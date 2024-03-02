#include <stdio.h>
#define N 100

int main()
{
    int i, n;
    int sum = 0;
    int array[N];
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
            sum += array[i];
    }
    printf("Sum of array is: %d", sum);

    return 0;
}