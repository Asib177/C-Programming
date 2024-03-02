#include <stdio.h>

int main()
{
    int a, b;
    printf("Input is: ");
    scanf("%d %d", &a, &b);
    a++;
    ++b;

    printf("Output is: ");
    printf("%d\n%d", a, b);
    // printf("%d", b);

    return 0;
}