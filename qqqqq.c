#include <stdio.h>

int main()
{
    int i, num1, num2;
    printf("Enter the renge: \n");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i < num2; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            if (i < num2 - 1)
            {
                printf(", ");
            }
        }
    }

    return 0;
}