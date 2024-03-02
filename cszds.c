#include <stdio.h>

int main()
{
    int n, a, i;
    printf("Input Number: ");
    scanf("%d", &n);

    int sum = 0;
    float avg;
    int max = 0;
    printf("Input Elements: \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        sum += a;
        if (max < a)
            max = a;
    }

    avg = (float)sum / n;

    printf("Sum is: %d", sum);
    printf("\nAvarege is: %.2f", avg);
    printf("\nMax is: %d", max);

    return 0;
}