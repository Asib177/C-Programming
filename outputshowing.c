#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Input Integer value: ");
    scanf("%d", &a);

    printf("Input Floting value: ");
    scanf("%f", &b);

    printf("Integer value = %d\n", a);
    printf("Floating point value = %.3f", b);

    return 0;
}