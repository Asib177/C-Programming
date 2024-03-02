#include <stdio.h>
#define N 100

int main()
{
    int array[N];
    int i, num1;
    printf("Enter the number:\n");
    scanf("%d", &num1);

    printf("Enter the array element:\n");
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Output is: \n");
    for (i = 0; i < num1; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}