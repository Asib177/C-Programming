#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter thr input: ");
    scanf("%d", &n);

    printf("\nOutput is:\n");
    for (i = 1; i <= 10; i++)
    {
        // printf("%d *", n);
        // printf("%d", i);
        printf("%d * %d= %d", n, i, n * i);
        printf("\n");
    }

    return 0;
}