#include <stdio.h>
#define MAX_SIZE 100

void PrintArray(int arr[], int start, int len);

int main()
{
    int arr[MAX_SIZE];
    int num, i;

    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter elements in the array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array: ");
    PrintArray(arr, 0, num);

    return 0;
}

void PrintArray(int arr[], int start, int len)
{
    if (start >= len)
        return;

    printf("%d ", arr[start]);

    PrintArray(arr, start + 1, len);
}