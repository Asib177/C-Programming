#include <stdio.h>
int main()
{
    int arr[100], size, isUnique;
    int i, j, k;
    // Reads size of the array
    printf("Enter size of array: ");
    scanf("%d", &size);
    // Reads elements in array
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Removing all duplicate elements from the array
    for (i = 0; i < size; i++)
    {
        // Assuming  cuurent element is unique */
        isUnique = 1;
        for (j = i + 1; j < size; j++)
        {
            // If any duplicate element is found
            if (arr[i] == arr[j])
            {
                // Removing duplicate element
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
                isUnique = 0;
            }
        }
        /*
        If array element is not unique
        then also remove the current element
         */
        if (isUnique != 1)
        {
            for (j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    // Printing all unique elements in array
    printf("\nAll unique elements in the array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}