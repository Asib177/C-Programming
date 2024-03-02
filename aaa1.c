#include <stdio.h>
#define N 100

int main()
{
    int i, n;
    int array[N];
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Revers of array:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d\n", array[i]);

    return 0;
}