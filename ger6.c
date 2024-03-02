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
    revFunc(arr, n);
    return 0;
}

void revFunc(int arr[], int a)
{
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}