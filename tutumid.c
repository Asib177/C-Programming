#include <stdio.h>
#define N 1000

int main()
{
    int array[N], i, j, n;
    printf("Enter the array number: ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter the array element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The number are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}