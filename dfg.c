#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    revNum(arr, n);

    return 0;
}

void revNum(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
