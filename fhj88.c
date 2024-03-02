#include <stdio.h>

int main()
{
    int n, a, i;
    printf("Input Number: ");
    scanf("%d", &n);

    int sum = 0;
    float avg;

    printf("Input Elements: \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }

    printf("Sum is: %d", sum);
    printf("Avarege is: %.2f", sum / (float)n);

    return 0;
}