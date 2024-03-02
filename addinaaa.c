#include <stdio.h>
int main()
{
    int arr[100];
    int i, num, size, position;

    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to insert : ");
    scanf("%d", &num);
    printf("\nEnter the element position : ");
    scanf("%d", &position);

    if (position > size + 1 || position <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", num);
    }
    else
    {

        for (i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = num;
        size++;

        printf("Array elements after insertion :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}