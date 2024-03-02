#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter number:\n");
    scanf("%d", &num);
    printf("\n");

    printf("Output is:\n");
    for (i = 1; i <= num; i++)
    {
        printf("%d, ", i % 2);
        
    }

    return 0;
}