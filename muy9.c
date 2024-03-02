#include <stdio.h>
void sumFunction(int a[], int b);

int sum = 0;

int main()
{
    int n, arr[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum in Main: %d", sum);
    sumFunction(arr, n);

    return 0;
}

void sumFunction(int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum in Function: %d", sum);
}
