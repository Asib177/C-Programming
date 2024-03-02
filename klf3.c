#include <stdio.h>

int reverse(int a)
{
    if (a == 0)
    {
        printf("%d ", a);
        return;
    }

    reverse(a - 1);
    // printf("%d ", a);

    //     if (a % 2 != 0)
    //         printf("+ %d ", a);
    //     if (a % 2 == 0)
    //         printf("* %d ", a);
    int temp = a, sum = 0;

    int r = temp % 10;
    sum = sum * 10 + r;
    temp = temp / 10;

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = reverse(n);
    printf("%d ", result);
}
