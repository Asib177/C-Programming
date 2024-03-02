#include <stdio.h>
#define N 100

int main()
{
    int i, j, n, poss, arr[N];
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position number: ");
    scanf("%d", &poss);

    // for (i = poss - 1; i < n - 1; i++)
    for (i = poss - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    // arr[n - 1] = 0;
    n--;

    printf("After delet of array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}