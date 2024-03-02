#include <stdio.h>

int Func(int *a, int *b);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Before Swaping: \n");
    printf("num1: %d\t num2: %d", num1, num2);

    printf("\n\nAfter Swaping: \n");
    Func(&num1, &num2);
    printf("A: %d\t B: %d", num1, num2);
    return 0;
}

int Func(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return temp;
}